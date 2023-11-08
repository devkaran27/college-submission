#include<stdio.h>

void main(){

int a=10, *in=&a;

float b=10, *fl=&b;

char c='A', *ch=&c; 

printf("%d %d\n", in, *in);
printf("%d %f\n", fl, *fl);
printf("%d %c\n", ch, *ch);

}