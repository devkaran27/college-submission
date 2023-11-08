#include<stdio.h>

void main(){

int freq[10], num, i;

printf("Enter a number : ");
scanf("%d", &num);

for(i=0; i<=9; i++){
    freq[i]=0;
}

for(; num!=0;){
    i=num%10;
    freq[i]++;
    num=num/10;
}

for(i=0; i<=9; i++){

    if(freq[i]!=0){
        printf("Frequency of digit %d : %d\n", i, freq[i]);
    }
}

}