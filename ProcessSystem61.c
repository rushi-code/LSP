//Priority of current process
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/resource.h>

int main()
{
    int Ret = 0;

    Ret = getpriority(PRIO_PROCESS,0); // (PRIO_PROCESS -> of process )(0 indicates current process)

    printf("Priority of process is %d\n",Ret);

    return 0;
}