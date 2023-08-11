//Change the priority of process 
//nice system call

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/resource.h>

int main()
{
    int Ret = 0;

    Ret = nice(0);
    printf("Current priority of precces is %d\n",Ret);

    Ret = nice(10);
    printf("Current priority of process is %d\n",Ret);

    return 0;
}