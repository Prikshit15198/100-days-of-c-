#include<stdio.h>
int main (){
int temp,celcius,fahr;
printf("enter the temperature in celcius : ");
scanf("%d",&celcius);
fahr = (celcius*9/5)+32;
printf("the temperature in fahr is : %d \n",fahr);
return 0;
}