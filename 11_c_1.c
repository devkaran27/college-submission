#include<stdio.h>

void main(){

int num, rev=0, f, l, i, j;

printf("Enter a number : ");
scanf("%d", &num);

l = num%10;

for(i=0 ;num!=0; i++){

    f = num%10; 

    rev = (rev*10)  + f;

    num = num/10;
    
}

for(j=1 ;rev!=0; j++){

    if(j==1){

        num = (num*10)  + l;

        rev = rev/10;

    }
    else if(j!=1 && j!=i){

        l = rev%10;

        num = (num*10)  + l;

        rev = rev/10;

    }

    else if(j==i){

        num = (num*10)  + f;

        rev = rev/10;

    }

}

printf("%d", num);

}