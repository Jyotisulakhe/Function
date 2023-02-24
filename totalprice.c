#include<stdio.h>

void calculateprice(float value);
//changes to parameter in function dont change in values in calling function (because  a copy of argument is passed to the function) this code these property satisfy


    int main()
    {
        float value=100.0;
        calculateprice(value);
        printf("value is %f",value);
        return 0;
    }
    void calculateprice(float value){

    value=value+(0.18*value);
    printf("final price is :%f\n",value);
}
