#include<stdio.h>

int maximum(int a, int b){
	
	int max;

	if(a>b){
		max=a;
	}

	else{
		max=b;
	}

	return max;
}

int minimum(int a, int b){
	
	int min;

	if(a<b){
		min=a;
	}

	else{
		min=b;
	}
	
	return min;
}

void main(){

int num1 , num2;

printf("Enter a number: ");
scanf("%d", &num1);

printf("Enter another number: ");
scanf("%d", &num2);

printf("Maximum number is %d \n", maximum(num1, num2));
printf("Minimum number is %d \n", minimum(num1, num2));

}