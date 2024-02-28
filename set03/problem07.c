//7. Write a program to find the length of a line

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct points{
    float x;
    float y;
}point;

typedef struct lines{
    point p1;
    point p2;
    float dist;
}line;

point input(){
    point n;
    printf("enter x: ");
    scanf("%f",&n.x);
    printf("enter y: ");
    scanf("%f",&n.y);
    return n;
}

line input_line(){
    line l;
    printf("enter coordinates of 1st line: ");
    l.p1=input();
    printf("enter coordinates of 2nd line: ");
    l.p2=input();
    return l;
}

void length(line *l){
    float a,b;
    a=l->p2.x-l->p1.x;
    b=l->p2.y-l->p1.y;
    l->dist=sqrt(a*a+b*b);
}

void output(line l){
    printf("the length of the line is %f",l.dist);
}

int main(){
    line lin;
    lin=input_line();
    length(&lin);
    output(lin);
    return 0;
}
