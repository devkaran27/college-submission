#include<stdio.h>

void main(){
    
int n, i, j=0, ele=0;

printf("Enter length of string:");
scanf("%d", &n);

int a[n], e[n];

for(i=0; i<n; i++){

	printf("Enter element for a1[%d] : ", i);
	
	scanf("%d", &a[i]);

	}
printf("Enter element of array to search:");
scanf("%d", &ele);

for(i=0; i<n; i++){

	if(a[i]==ele){
		e[j]=i;
		j++;

	}

}

printf("The element is present in array at index : ");

for(i=0; i<j; i++){

	printf("%d ", e[i]);

}
	
}