#include<stdio.h>

void main(){

int num1, num2, sum;

printf("Enter a number : ");
scanf("%d", &num1);
printf("Enter another number : ");
scanf("%d", &num2);

int *p1=&num1, *p2=&num2;

sum = *p1 + *p2;

printf("Sum of numbers is %d", sum);

}