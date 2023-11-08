#include<stdio.h>
#include<string.h>

void main(){
    
char a[1];

printf("Enter string: ");
gets(a);

int i, l=0;

for(i=0; a[i]!='\0'; i++){
	l++;
}

puts(a); 

printf("Length of string is %d", l);

}