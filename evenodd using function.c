#include<stdio.h>
void add();
void even();
void odd();


//function call
int main()
{
printf("for addition\n");
  add();
  printf("for even no\n");
  int a;

printf("enter no\n");
scanf("%d",&a);
if(a%2==0){
  even();
}
  printf("for odd no\n");
  int b;
printf("enter no\n");
scanf("%d",&b);
if(b%2!=0){
  odd();
}
}


//defination declaration
void add(){   
int a,b,sum;
  printf("enter value");
  scanf("%d",&a);
  printf("enter value");
  scanf("%d",&b);
  sum=a+b;
  printf("sum is %d\n\n\n",sum);
}
void even(){
 printf(" given no is even no\n\n\n");
}
void odd(){
 printf(" given no is odd no\n\n");
}

