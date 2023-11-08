#include<stdio.h>

void main(){
  
int r=3, c=3, i, j, pos=0, neg=0, zero=0;

int a[r][c];

for(i=0; i<r; i++){

	for(j=0; j<c; j++){

		printf("Enter element a[%d][%d] : ", i, j);
		scanf("%d", &a[i][j]);

		if(a[i][j]>0){pos++;}

		else if(a[i][j]==0){zero++;}

		else if(a[i][j]<0){neg++;}

	}
	
}

printf("Number of positive elements are %d\n", pos);

printf("Number of negative elements are %d\n", neg);

printf("Number of zero elements are %d\n", zero);

}