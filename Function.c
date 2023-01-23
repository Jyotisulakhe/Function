#include<stdio.h>
void printhello();//prototype
void printgoodbye();

int main()
{
    printhello();//function call
     printgoodbye();
   printhello();


    return 0;
}

void printhello(){ //definition declaration
    printf("hello  \n");

    int a=5;
    printf("%d \n",a);
}
void printgoodbye(){ //definition declaration
    printf(" goodbye :) \n");

}
