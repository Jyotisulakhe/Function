//Function
#include<stdio.h>
void add();
void even();
void odd();
int main()
{
  add();
  even();
  odd();
}
void add(){
int a,b,sum;
  printf("enter value");
  scanf("%d",&a);
  printf("enter value");
  scanf("%d",&b);
  sum=a+b;
  printf("sum is %d\n",sum);
}
void even(){
int a;
printf("enter no\n");
scanf("%d",&a);
if(a%2==0){
    printf("even no\n");
}
}
void odd(){
int b;
printf("enter no\n");
scanf("%d",&b);
if(b%2!=0){
    printf("odd no\n");
}
}
