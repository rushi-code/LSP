//Multithreading using pthread library

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

//Fixed Prototype for thread function

// void * _____ (void * ___)
// {}

void * ThreadProc(void *ptr)        //Thread Procedure
{
    printf("Inside Thread\n");
}


int main()
{
    pthread_t TID;
    int ret = 0;

    ret = pthread_create(&TID,NULL,ThreadProc,NULL);

    if(ret!= 0)
    {
        printf("Unable to create thread\n");
        return -1;
    }

    printf("Thread is created with ID %d\n",TID);
    return 0;
}