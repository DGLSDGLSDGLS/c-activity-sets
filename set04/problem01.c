//. Write a program to find sum of two fractions
#include<stdio.h>

void input(int *num1,int *den1,int *num2 ,int *den2){
    printf("enter 1st numerator: ");
    scanf("%d",num1);
    printf("enter 1st denominator: ");
    scanf("%d",den1);
    printf("enter 2nd number: ");
    scanf("%d",num2);
    printf("enter 2nd denominator: ");
    scanf("%d",den2);
}

void add(int num1,int den1,int num2,int den2,int *res_num,int *res_den){
    *res_num=(num1*den2)+(num2*den1);
    *res_den=(den1*den2);
}

int hcf(int res_num,int res_den){
    int c;
    while(res_den!=0){  //while is used 
        c=res_num%res_den;
        res_num=res_den;
        res_den=c;
    }
    return res_num;
}

void simplify(int *res_num,int *res_den){
    int d;
    d=hcf(*res_num,*res_den);   // it is hcf , no need of any lops :>
    *res_num=*res_num/d;
    *res_den=*res_den/d;
}

void output(int res_num,int res_den){
    printf("the sum of two fractions is %d/%d",res_num,res_den);
}

int main(){
    int num1,den1,num2,den2,res_num,res_den;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    simplify(&res_num,&res_den);
    output(res_num,res_den);
    return 0;
}