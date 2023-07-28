//Accept name of file and read data from file memory allocated using malloc
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int fd = 0;
    char * Buffer= NULL;
    int Ret = 0;
    if(argc!=3)
    {
        printf("Insufficient Arguments\n");
        return -1;
    }

    fd = open(argv[1],O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    Buffer = (char*)malloc(atoi(argv[2]));

    Ret = read(fd,Buffer,atoi(argv[2]));
    if(Ret == 0)
    {
        printf("Unable to read\n");
        return -1;
    }

    printf("Data from file is : %s\n",Buffer);


    return 0;
}

