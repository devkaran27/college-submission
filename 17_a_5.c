#include<stdio.h>

void main(){

int n, i;

printf("Enter size of array : ");
scanf("%d", &n);


int a[n], *p;

for(i=0; i<n; i++){
	printf("Enter value for a[%d] ",i);
	scanf("%d", &a[i]);
}

for(i=0; i<n; i++){
	p=&a[i];
	printf("Value of a[%d] is %d\n", i, *p);
}

}