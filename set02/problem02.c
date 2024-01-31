//2.  Write a program to find if a triangle is scalene.

#include<stdio.h>
#include<stdlib.h>

int input(){
    int n;
    printf("enter side: ");
    scanf("%d",&n);
    return n;
}

int check(int a, int b, int c){
    if(a!=b && a!=c && b!=c){
        return 1;
    }
    return 2;
}

void output(int result){
    if(result==1){
        printf("triaingle is scalene");
        }
        else{
            printf("it is not scalene");
        }
}

int main(){
    int a,b,c;
    a=input();
    b=input();
    c=input();
    int checkk;
    checkk=check(a,b,c);
    output(checkk);
    return 0;

}