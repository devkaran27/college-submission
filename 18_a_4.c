#include<stdio.h>

int maximum(float a, float b, float c){
	
	int max;

	if(a>b){

		if(a>c){
			max=a;
		}

		else{
			max=c;
		}
	}

	else{

		if(b>c){
			max=b;
		}

		else{
			max=c;
		}
	}

	return max;
}

void main(){

int num1 , num2, num3;

printf("Enter a number: ");
scanf("%d", &num1);

printf("Enter another number: ");
scanf("%d", &num2);

printf("Enter another number: ");
scanf("%d", &num3);

printf("Maximum number is %d \n", maximum(num1, num2, num3));

}