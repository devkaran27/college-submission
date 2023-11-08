#include<stdio.h>

struct distance{
    int inch, feet;
};

void main(){

struct distance l1, l2, s;

int carr;

printf("Enter values for distance 1.\n");

printf("feet : ");
scanf("%d", &l1.feet);

printf("inches : ");
scanf("%d", &l1.inch);

printf("Enter values for distance 2.\n");

printf("feet : ");
scanf("%d", &l2.feet);

printf("inches : ");
scanf("%d", &l2.inch);

s.feet= l1.feet + l2.feet;
s.inch= l1.inch + l2.inch;

carr = s.inch/12;
s.inch = s.inch%12;

s.feet = s.feet + carr;

printf("Sum of distances is %d feet and %d inches", s.feet, s.inch);

}