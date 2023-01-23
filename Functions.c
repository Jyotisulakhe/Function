#include<stdio.h>
void namaste();//prototype
void bonjour();

int main()
{
    printf(" enter i for Indian or f for French :");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }else {
        bonjour();
    }


    return 0;
}
void namaste()
{
printf("namaste");
}
void bonjour()
{
    printf("bonjour");
}
