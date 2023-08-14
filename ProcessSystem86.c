//Client for shared memory

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/shm.h>

int main()
{
    int shmid = 0;
    int shmsize = 100;
    int Key = 1234;
    char *ptr = NULL;

    printf("client app is running\n");
    shmid = shmget(Key,shmsize, 0666);

    printf("Shared memory allocated successfully\n");

    ptr = shmat(shmid,NULL,0);
    if(ptr!=NULL)
    {
        printf("Shared memory attached successfully\n");
    }

    printf("Data from shared memory is : \n");
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    shmdt(shmid);
    
    return 0;
}