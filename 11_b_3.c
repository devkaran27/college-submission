#include<stdio.h>

void main(){

char c;

for(c=-128; c<=127; c++){
    printf("ASCII character for value %d : %c\n", c, c);
    if(c==127){
        break;
    }
}

}