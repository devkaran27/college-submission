#include<stdio.h>

void main(){

int n, i;

printf("Enter a number : ");
scanf("%d", &n);

for(i=1; i<=10; i++){
    if(i<=9){printf("%d x %d  = %d\n", n, i, n*i);}
    else{printf("%d x %d = %d\n", n, i, n*i);}
}

}