#include<stdio.h>
void printtype();//prototype
void agetype();//prototype
int main()
{

   printtype();agetype();//function call
   printtype();agetype();//function call
   printtype();agetype();//function call

    return 0;
}
void printtype()//function definition
{
    printf("i am jyoti sulakhe\n");
    printf(" i am from orange city\n\n");
}
void agetype()//function definition
{
    int age;
    printf("enter age :- ");
    scanf("%d",&age);
    printf("my age is %d\n",age);
    }
