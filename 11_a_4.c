#include<stdio.h>

void main(){

int num, pow, i, value=1;

printf("Enter a number : ");
scanf("%d", &num);
printf("Enter power : ");
scanf("%d", &pow);

for(i=1; i<=pow; i++){
    value=value*num;
}

printf("%d", value);

}