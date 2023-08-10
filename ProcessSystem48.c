//fork System Call 

//fun function get copied to both parent and child

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void fun()
{
    printf("Running process PID is : %d\n",getpid());
}

int main()
{
    int Ret = fork();

    if(Ret == 0)
    {
        fun();
    }
    else
    {
        fun();
    }
    
    return 0;
}