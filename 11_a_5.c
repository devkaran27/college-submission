#include<stdio.h>

void main(){

int num, i, value=1;

printf("Enter a number : ");
scanf("%d", &num);

for(i=1; i<=num; i++){
    value=value*i;
}

printf("%d", value);

}