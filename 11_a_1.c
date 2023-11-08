#include<stdio.h>

void main(){

int n,i;

printf("Enter a number:");
scanf("%d", &n);

// 1 to 10 using for

for(i=1; i<=10; i++){

	printf("%d ", i);

}

printf("\n");

//1 to n using for

for(i=1; i<=n; i++){

	printf("%d ", i);

}

printf("\n");

}