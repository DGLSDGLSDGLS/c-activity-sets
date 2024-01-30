// Write a C program to find sum of all natural numbers until _n_
#include<stdio.h>
int input(){
    int n;
    printf("till how many numbers you want to find the sum? ");
    scanf("%d",&n);
    return n;
}

int sum(int n){
    int i;
    int sum=0;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

void output(int summ){
    printf("the sum is %d\n",summ);
}

int main(){
    int n;
    n=input();
    int add;
    add=sum(n);
    output(add);
    return 0;
}