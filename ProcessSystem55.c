#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int Ret = 0;

    Ret = fork();

    if(Ret == 0)  // Child  
    {
        execl("/home/rushi/Desktop/LSP_Rev/Childprocess","NULL",NULL);
    }
    else        // Parent
    {
        printf("Parent is running with PID : %d\n",getpid());
    }
    return 0;
}