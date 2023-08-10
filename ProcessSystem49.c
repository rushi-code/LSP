//fork System Call (Wrong way)

//Data section copied to both parent and child

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int No = 10;

void fun()
{
    No++;
    printf("Running process PID is : %d and value of No is %d\n",getpid(),No);
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