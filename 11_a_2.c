#include<stdio.h>

void main(){

int n, i, sum=0;

printf("Enter a number:");
scanf("%d", &n);

for(i=1; i<=n; i++){
    sum=sum+i;
}

printf("Sum of numbers from 1 to %d is %d", n, sum);

}