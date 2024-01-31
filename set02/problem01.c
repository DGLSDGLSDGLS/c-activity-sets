//.  Write a program to find the area of a triangle.
#include<stdio.h>
#include<stdlib.h>

void input(float *base,float *height){
    printf("enter the base of the triangle: ");
    scanf("%f",base);
    printf("enter the height of the triangle: ");
    scanf("%f",height);
}

void areaa(float base, float height,float *area){
    *area=0.5*base*height;
}

void output(float area){
    printf("the area of the traingle is %f\n",area);
}

int main(){
    float basee,heightt;
    input(&basee,&heightt);
    float area;
    areaa(basee,heightt,&area);
    output(area);
    return 0;
}
