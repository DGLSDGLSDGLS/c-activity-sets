//Write a program to find the area of a triangle.
#include<stdio.h>
#include<stdlib.h>

struct triangle{
    float base;
    float alt;
    float area;
};

typedef struct triangle tri;

tri input(){
    tri n;
    printf("enter base: ");
    scanf("%f",&n.base);
    printf("enter height: ");
    scanf("%f",&n.alt);
    return n;
}

void find(tri *t){
    t->area=0.5*t->alt*t->base;
}

void output(tri t){
    printf("the area of the triangle is %f",t.area);
}

int main(){
    tri n;
    n=input();
    find(&n);
    output(n);
    return 0;
}
