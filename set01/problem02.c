#include<stdio.h>
int input(){
    int n;
    printf("enter number to add: ");
    scanf("%d",&n);
    return n;
}

int sum(int a, int b, int s){
    s=a+b;
    return s;
}

void output(int s){
    printf("the sum id %d",s);
}

int main(){
    int a,b;
    a=input();
    b=input();
    int s;
    s=sum(a,b,s);
    output(s);
    return 0;
}
