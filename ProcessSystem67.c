//Demonstration of Mulitiprocessing
//count small and capital characters from file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int ret1 = 0, ret2 = 0,pid1 = 0, pid2 = 0, status1 = 0 , status2 = 0;

    ret1 = fork();
        
    if(ret1 == 0)
    {
        execl("./Process1","NULL",NULL);
    }

    wait(&status1);

    ret2 = fork();
        
    if(ret2 == 0)
    {
        execl("./Process2","NULL",NULL);
    }

    wait(&status2);

    return 0;
}