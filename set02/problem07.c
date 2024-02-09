//Write a program to find the area of a triangle.
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

#include<stdio.h>
#include<stdlib.h>

struct triangle{
    float base;
    float alt;
};

typedef Triangle tri;

tri input(){
    tri n;
    printf("enter base and height of the triangle seperately: ");
    scanf("%f",&n);
    return n;
}

void find(tri *t){

}
