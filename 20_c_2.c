#include<stdio.h>

struct time{
    int hh, mm, ss;
};

void main(){

struct time t1, t2, s;

int carr;

printf("Enter values for time 1.\n");

printf("seconds : ");
scanf("%d", &t1.ss);

printf("minutes : ");
scanf("%d", &t1.mm);

printf("hours : ");
scanf("%d", &t1.hh);

printf("Enter values for time 2.\n");

printf("seconds : ");
scanf("%d", &t2.ss);

printf("minutes : ");
scanf("%d", &t2.mm);

printf("hours : ");
scanf("%d", &t2.hh);

s.ss= t1.ss + t2.ss;
s.mm= t1.mm + t2.mm;
s.hh= t1.hh + t2.hh;

carr = s.ss/60;
s.ss = s.ss%60;

s.mm = s.mm + carr;
carr = s.mm/60;
s.mm = s.mm/60;

s.hh = s.hh + carr;

printf("Sum of times is %02d:%02d:%02d", s.hh, s.mm, s.ss);

}