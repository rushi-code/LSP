//Display file name and filesize from directory

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/stat.h>


int main(int argc, char *argv[])
{
    char DirName[20];
    DIR *dp = NULL;
    struct dirent *entry = NULL;
    char name[30];
    struct stat sobj;

    printf("Enter name of directory : \n");
    scanf("%s",DirName);

    dp = opendir(DirName);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }

    while((entry = readdir(dp))!=NULL)
    {
        sprintf(name,"%s/%s",DirName,entry->d_name);
        stat(name,&sobj);
        printf("File Name : %s File Size : %ld\n",name,sobj.st_size);
    }
    closedir(dp);
    
    return 0;
}