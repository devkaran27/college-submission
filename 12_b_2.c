#include<stdio.h>

void main(){

float i, j, fac=1, e=1;

for(i=1; i<=10; i++){

    for(j=1; j<=i; j++){
        fac = fac*j;
    }
    e = e + 1/fac;

    fac = 1;

}

printf("Estimate value of mathematical constant e is %f", e);

}