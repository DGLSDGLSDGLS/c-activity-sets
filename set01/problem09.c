//Write a C program to find the [square root] of a number
#include<stdio.h>
float input(){
    float n;
    printf("enter number to find its square root: ");
    scanf("%f",&n);
    return n;
}

float sqr(float n){
    float x=n;
    int i;
    for(i=0;i<10;i++){
        x=0.5*(x+n/x);
    }
    return x;
}

void output(float n, float sqrr){
    printf("the square root of the number %.2f is %.2f\n",n,sqrr);
}

int main(){
    float n;
    n=input();
    float sqrr;
    sqrr=sqr(n);
    output(n,sqrr);
    return 0;
}