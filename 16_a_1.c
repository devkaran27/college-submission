#include<stdio.h>

void main(){
  
int r, c, i, j;

printf("Enter number of rows in array: ");
scanf("%d", &r);

printf("Enter number of columns in array: ");

scanf("%d", &c);

int a[r][c];

for(i=0; i<r; i++){

	for(j=0; j<c; j++){

		printf("Enter element a[%d][%d] : ", i, j);
		scanf("%d", &a[i][j]);

	}
	
}

for(i=0; i<r; i++){

	for(j=0; j<c; j++){

		printf("%d ", a[i][j]);

	}

	printf("\n");
	
}

}