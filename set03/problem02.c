//2. Write a program to find whether the given 3 points form a triangle
#include<stdio.h>
#include<stdlib.h>
void input(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3){
    printf("enter x1 ");
    scanf("%f",x1);
    printf("entrer y1 ");
    scanf("%f",y1);
    printf("enter x2 ");
    scanf("%f",x2);
    printf("enter y2 ");
    scanf("%f",y2);
    printf("enter x3 ");
    scanf("%f",x3);
    printf("enter y3 ");
    scanf("%f",y3);
}

int is(float x1,float y1,float x2,float y2,float x3,float y3){
    if((x1==x2 && x2==x3) || (y1==y2 && y2==y3)){
        return 1;
    }
    return 2;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
    if(result==1){
        printf("it is not a triangle");
    }
    else{
        printf("it is a triangle");
    }
}

int main(){
    float x1,y1,x2,y2,x3,y3;
    input(&x1,&y1,&x2,&y2,&x3,&y3);
    int result;
    result=is(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
