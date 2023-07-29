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


    printf("Enter the file name\n");
    scanf("%s",Fname);

    fd =open(Fname,O_RDONLY);
    read(fd,&sobj,sizeof(sobj));

    printf("Roll number : %d : \n",sobj.RollNo);
    printf("Name : %s : \n",sobj.Sname);
    printf("Marks : %f : \n",sobj.Marks);
    printf("Age : %d : \n",sobj.Age);
    

    close(fd);
    
    return 0;
}