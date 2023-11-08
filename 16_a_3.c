#include<stdio.h>

void main(){
  
int r=20, c=2, i, j;

int a[r][c];

for(i=0; i<r; i++){
    
	for(j=0; j<c; j++){
	    
		printf("Enter roll number : ");
		scanf("%d", &a[i][j]);
		
		j++;
		
		printf("Enter marks : ");
		scanf("%d", &a[i][j]);
    }
    
    printf("\n");
}
	
}