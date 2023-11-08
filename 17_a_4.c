#include<stdio.h>

void main(){

int a, b;

printf("Enter a number a : ");
scanf("%d", &a);
printf("Enter a number b : ");
scanf("%d", &b);

int *p1=&a, *p2=&b;

*p1 = *p1 * *p2;
*p2 = *p1 / *p2;
*p1 = *p1 / *p2;


printf("Swapped value of a is %d\n", *p1);
printf("Swapped value of b is %d", *p2);

}