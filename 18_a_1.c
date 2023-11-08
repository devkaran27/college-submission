#include<stdio.h>

int add(int a, int b){
	int sum=a+b;
	return sum;
}

void main(){

int num1 , num2;

printf("Enter a number: ");
scanf("%d", &num1);

printf("Enter another number: ");
scanf("%d", &num2);

printf("Sum of numbers is %d", add(num1, num2));

}