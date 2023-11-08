#include<stdio.h>

void main(){

int a=0, b=1, c, n, i;

printf("Enter term number for fibonacci series : ");
scanf("%d", &n);

for(i=0; i<n; i++){
    printf("%d ", a);
    c=a+b;
    a=b;
    b=c;
}
}