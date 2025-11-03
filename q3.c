#include<stdio.h>
int main(){

int length,breadth,area,perimeter;
printf("Enter the length of rectangle : ");
scanf("%d",&length);

printf("enter the breadth of rectangle : ");
scanf("%d",&breadth);
area = length * breadth;
perimeter = 2*(length+breadth);
printf("the area of rectangle is : %d \n ",area);
printf("the breadth of rectangle is : %d \n ",perimeter);
return 0;
}