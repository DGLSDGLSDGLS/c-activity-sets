//4. Write a program to find nth number in fibonacci sequence.
#include<stdio.h>
#include<stdlib.h>
int input(){
    int n;
    printf("enter number to find nth number in fibonacci sequence: ");
    scanf("%d",&n);
    return n;
}

int fibo(int n){
    int i;
    int a=0;
    int b=1;
    int c;
     for(i=1;i<n;i++){
        c=a+b;
        b=a;
        a=c;
    }
    return c;
}

void output(int f){
    printf("the nth fibo is %d",f);
}

int main(){
    int n;
    n=input();
    int g;
    g=fibo(n);
    output(g);
    return 0;
}