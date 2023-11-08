#include<stdio.h>

void main(){
    
int n, i, neg=0;

printf("Enter length of string:");
scanf("%d", &n);

int a[n];

for(i=0; i<n; i++){

	printf("Enter element for a1[%d] : ", i);
	
	scanf("%d", &a[i]);

	if(a[i]<0){
		neg++;
	}

}

printf("Number of negative elements are %d", neg);
	
}