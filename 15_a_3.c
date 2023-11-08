#include<stdio.h>

void main(){
    
int n, i, div=0;

printf("Enter length of string:");
scanf("%d", &n);

int a[n];

for(i=0; i<n; i++){

	printf("Enter element for a1[%d] : ", i);
	
	scanf("%d", &a[i]);

	if(a[i]%3==0){
		div++;
	}

}

printf("Number of elements divisible by 3 are %d", div);
	
}