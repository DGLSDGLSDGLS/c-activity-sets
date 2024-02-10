//3. Write a program to check if the given number is prime
#include<stdio.h>
#include<stdlib.h>
int input(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    return n;
}

int is_prime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 2;
}

void output(int n,int result){
    if(result==1){
        printf("%d is a composite number",n);
    }
    else{
        printf("%d is a prime number",n);
    }
}

int main(){
    int n;
    n=input();
    int pr;
    pr=is_prime(n);
    output(n,pr);
    return 0;
}