#include<stdio.h>

//print table using function
void printtable(int n);

int main(){

int n;
printf("enter number:");
scanf("%d",&n);
 printtable( n);

return 0;
}
void printtable(int n){

for( int i=1;i<=10;i++)
    printf("%d\n",i*n);

}
