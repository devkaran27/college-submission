#include<stdio.h>

int fact(int num){

    int i, fac=1;

    for(i=1; i<=num; i++){
        fac = fac*i;
    }

    return fac;

}

int nCr(int n, int r){

    int ncr = fact(n)/(fact(r)*fact(n-r));

    return ncr;

}

int nPr(int n, int r){

    int npr = fact(n)/fact(n-r);

    return npr;
}

void main(){

    int n, r, ncr, npr;

    printf("Enter value for n : ");
    scanf("%d", &n);

    printf("Enter value for r : ");
    scanf("%d", &r);

    ncr = nCr(n, r);
    npr = nPr(n, r);

    printf("Value of nCr is %d \nValue of nPr is %d", ncr, npr);

}