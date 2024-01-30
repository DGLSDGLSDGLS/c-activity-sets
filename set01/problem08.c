//Write a C program to find sum of _n_ different numbers entered by the user.
#include<stdio.h>
int input(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    return n;
}

void input_arr(int n, int a[n]){
    int i;
    for(i=0;i<n;i++){
        printf("enter number");
        scanf("%d",a[i]);
    }
}

int sum(int n,int a[n]){
    int i;
    int sum = 0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;
}

void output(int summ){
    printf("the sum is %d",summ);
}

int main(){
    int n;
    n=input();
    int a[n];
    input_arr(n,a);
    int summ;
    summ=sum(n,a);
    output(summ);
    return 0;
}