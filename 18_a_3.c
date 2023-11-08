#include<stdio.h>

int si(int p_, int r_, int n_){
	int s_i = p_*r_*n_/100;
	return s_i;
}

void main(){

int p, r, n;

printf("Enter principle amount : ");
scanf("%d", &p);

printf("Enter rate of interest : ");
scanf("%d", &r);

printf("Enter number of years : ");
scanf("%d", &n);

printf("Simple interest is %d", si(p, r, n));

}b