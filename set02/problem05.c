// hcf

#include<stdio.h>
#include<stdlib.h>
int input(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    return n;
}

int hcf(int a ,int b){
   int r;
   while(b!=0){
    r=a%b;
    a=b;
    b=r;
   }
   return a;
}

void output(int summm){
    printf("the hcf is %d",summm);
}

int main(){
    int a,b;
    a=input();
    b=input();
    int hc;
    hc=hcf(a,b);
    output(hc);
    return 0;
}