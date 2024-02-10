//Write a program to find the distance between 2 points
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void input(float *x1,float *y1 ,float *x2,float *y2){
    printf("enter x1 ");
    scanf("%f",x1);
    printf("entrer y1 ");
    scanf("%f",y1);
    printf("enter x2 ");
    scanf("%f",x2);
    printf("enter y2 ");
    scanf("%f",y2);
}

float find(float x1,float y1, float x2,float y2){
    float s;
    float g;
    float d;
    float r;
    s=(x2*x2)-(2*x1*x2)+(x1*x1);
    g=(y2*y2)-(2*y1*y2)+(y1*y1);
    d=(s+g);
    r=sqrt(d);
    return r;
}

void output(float distance){
    printf("the distance is %f",distance);
}

int main(){
    float x1,y1,x2,y2;
    input(&x1,&y1,&x2,&y2);
    float fin;
    fin=find(x1,y1,x2,y2);
    output(fin);
    return 0;
}