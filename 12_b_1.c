#include<stdio.h>

void main(){

int n, i, j, s=0, sum=0;

printf("Enter the value for n : ");
scanf("%d", &n);

for(i=1; i<=n; i++){

    for(j=1; j<=i; j++){
        
        s = s+j;

    }

    sum = sum+s;

    s=0;

}

printf("Sum of series is : %d", sum);

}   
