//Write a program which accept filename from user and open it
//Without O_CREAT

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    int fd = 0;

    if(argc!=2)
    {
        printf("Invalid Arguments\n");
        return -1;
    }

    fd = open(argv[1],O_RDWR);

    if(fd != -1)
    {
        printf("File is successfully opened with fd %d\n",fd);
    }
    return 0;
}