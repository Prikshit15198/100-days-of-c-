#include<stdio.h>
int main(){

float radious,area, circumference;
printf("enter the radious of circle : ");
scanf("%f",&radious);
area = 3.14*radious*radious;
circumference = 2*3.14*radious;
printf("the area of circle is : %.2f \n",area);
printf("the cicumfrenece of circle is : %.2f \n",circumference);
return 0; 
}