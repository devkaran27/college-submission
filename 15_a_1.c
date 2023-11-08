#include<stdio.h>

void main(){
    
int n, i;

printf("Enter length of string:");

scanf("%d", &n);

int a1[n], a2[n];

for(i=0; i<n; i++){
	printf("Enter element for a1[%d] : ", i);
	scanf("%d", &a1[i]);
}

for (i=0; i<n; i++){
	a2[i]=a1[i];
}

for(i=0; i<n; i++){

	printf("%d", a2[i]);
	
}

}