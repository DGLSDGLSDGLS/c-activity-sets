// Write a program to find Sum of composite number in an array of different numbers entered by the user.

#include<stdio.h>
#include<stdlib.h>
int input(){
    int n;
    printf("enter how many number you want to enter in total: ");
    scanf("%d", &n);
    return n;
}

void input_arr(int n,int a[n]){
    int i;
    for(i=0;i<n;i++){
        printf("enter a number: ");
        scanf("%d",&a[i]);
    }
}

int comp(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0 && n!=i){
            return 1;
        }
    }
    return 0;
}

int sum(int n,int a[n]){
    int i;
    int sum=0;
    for(i=0;i<n;i++){
    if(comp(a[i])){
        sum=sum+a[i];
    }}
    return sum;
}

void output(int summ){
    printf("the sum of all compsite number entered is %d",summ);
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