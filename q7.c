#include<stdio.h>
int main() {
int a,b;
printf("enter the first no : ");
scanf("%d",&a);
printf("enter the second no : ");
scanf("%d",&b);

a = a+b;
b = a-b;
a = a-b;
printf("after swapping first no is : %d \n",a);
printf("after swapping second no is : %d \n",b);
return 0;
}