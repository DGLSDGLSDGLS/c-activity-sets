#include<stdio.h>
#include<stdlib.h>

int input(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    return n;
}

int result(int n){
    int i;
    for(i = 2; i < n; i++){
        if(n % i == 0 && n != i){
            return 2; 
        }
    }
    return 1;
}

void output(int resultt){
    if(resultt == 2){
        printf("The number is composite");
    }
    else {
        printf("The number is prime");
    }
}

int main(){
    int n;
    n = input();
    int res;
    res = result(n);
    output(res);
    return 0;
}
