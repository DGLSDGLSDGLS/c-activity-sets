// Write a C program to find the sum of 2 complex numbers
#include<stdio.h>
struct complex{
    float real;
    float imag;
};

typedef struct complex com;
com input(){
    com a;
    printf("enter real number: ");
    scanf("%f",&a.real);
    printf("enter the imaginary part: ");
    scanf("%f",&a.imag);
    return a;
}

com add(com a,com b){
    com sum;
    sum.real=a.real+b.real;
    sum.imag=a.imag+b.imag;
    return sum;
}
void output(com sum){
    printf("the sum od %f+%fi",sum.real,sum.imag);
}

int main(){
    com a,b;
    a=input();
    b=input();
    com sum;
    sum=add(a,b);
    output(sum);
    return 0;
}

