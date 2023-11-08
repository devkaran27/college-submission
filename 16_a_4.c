#include<stdio.h>

void main(){
  
int r, c, i, j;

printf("Enter number of rows in arrays: ");
scanf("%d", &r);

printf("Enter number of columns in arrays: ");
scanf("%d", &c);


int a1[r][c], a2[r][c], s[r][c];

for(i=0; i<r; i++){

	for(j=0; j<c; j++){

		printf("Enter element a1[%d][%d] : ", i, j);
		scanf("%d", &a1[i][j]);

	}
	
}

printf("\n");

for(i=0; i<r; i++){

	for(j=0; j<c; j++){

		printf("Enter element a2[%d][%d] : ", i, j);
		scanf("%d", &a2[i][j]);

	}
	
}

printf("\n");

for(i=0; i<r; i++){

	for(j=0; j<c; j++){

		s[i][j]=a1[i][j]+a2[i][j];

	}
	
}

}