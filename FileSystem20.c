//write a program which accept file name from user which contain info about student, read all content of that file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


#include<string.h>

#pragma pack(1)

struct Student
{
    int RollNo;
    char Sname[20];
    float Marks;
    int Age;
};


int main(int argc, char *argv[])
{
    struct Student sobj;
    char Fname[20];
    int fd = 0;

    sobj.RollNo = 11;
    sobj.Marks = 89.99f;
    sobj.Age = 25;
    strcpy(sobj.Sname,"Rahul");

    printf("Enter the file name\n");
    scanf("%s",Fname);

    fd =creat(Fname,0777);

    write(fd,&sobj,sizeof(sobj));
    
    return 0;
}