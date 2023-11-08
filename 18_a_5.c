#include<stdio.h>

void swap_v(int a_v, int b_v){

	a_v=a_v*b_v;
	b_v=a_v/b_v;
	a_v=a_v/b_v;

	printf("Swapped value of a is %d\n", a_v);

	printf("Swapped value of b is %d\n", b_v);
}

void swap_r(int a_r, int b_r){

	int *p1=&a_r, *p2=&b_r;

	*p1 = *p1 * *p2;
	*p2 = *p1 / *p2;
	*p1 = *p1 / *p2;

	printf("Swapped value of a is %d\n", *p1 );

	printf("Swapped value of b is %d\n", *p2);
}
void main(){

int a, b;

printf("Enter a number a : ");
scanf("%d", &a);
printf("Enter a number b : ");
scanf("%d", &b);

swap_v(a,b);

swap_r(a,b);

}