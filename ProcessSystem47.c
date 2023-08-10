//fork System Call (Wrong way)
// Text section copy to both parent and child is proved

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    fork();

    printf("Hello World : %d\n",getpid());
    
    return 0;
}