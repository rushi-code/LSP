//fork System Call

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int Ret = 0;
    Ret = fork();

    if(Ret == 0) //Child
    {
        printf("Child process is running\n");
        printf("Child says : PID of parent process is : %d\n",getppid());  //1587
        printf("Child says : PID of child process is : %d\n",getpid());     //9007
    }
    else        //Parent
    {
        printf("Parent process is running\n");
        printf("Parent says : PID of child process is : %d\n",Ret); //9007
        printf("Parent says : PID of parent process is : %d\n",getpid());//9006
        printf("Parent says : PID of parent process of parent ie Terminal is : %d\n",getppid());//6651
    }

    return 0;
}