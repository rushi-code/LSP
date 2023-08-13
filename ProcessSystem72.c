//Multithreading using pthread library

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

//Fixed Prototype for thread function

// void * _____ (void * ___)
// {}

void * ThreadProc1(void *ptr)        //Thread Procedure
{
    printf("Inside thread 1\n");
    pthread_exit(NULL);
}

void * ThreadProc2(void *ptr)        //Thread Procedure
{
    printf("Inside thread 2\n");
    pthread_exit(NULL);
}


int main()
{
    pthread_t TID1, TID2;
    int ret1 = 0, ret2 = 0;

    ret1= pthread_create(&TID1,NULL,ThreadProc1,NULL);

    if(ret1!= 0)
    {
        printf("Unable to create thread\n");
        return -1;
    }

    printf("Thread1 is created with ID %d\n",TID1);


    ret2= pthread_create(&TID2,NULL,ThreadProc2,NULL);

    if(ret2!= 0)
    {
        printf("Unable to create thread\n");
        return -1;
    }

    printf("Thread2 is created with ID %d\n",TID2);

    pthread_join(TID1,NULL);
    pthread_join(TID2,NULL);

    printf("End of Main Thread\n"); 

    pthread_exit(NULL);

    return 0;
}