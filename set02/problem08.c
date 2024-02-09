#include<stdio.h>
#include<stdlib.h>

struct triangle {
    float base;
    float alt;
    float area;
};
typedef struct triangle tri;

int input() {
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}

tri input_tri() {
    tri x;
    printf("Enter the height of the triangle: ");
    scanf("%f", &x.alt);
    printf("Enter the base of the triangle: ");
    scanf("%f", &x.base);
    return x;
}

void input_n(int n, tri t[n]) {
    for (int i = 0; i < n; i++) {
        t[i] = input_tri();
    }
}

tri areaa(tri t) {
    t.area = 0.5 * t.base * t.alt;
    return t;
}

tri smallest(int n, tri t[n]) {
    tri small = t[0];
    for (int i = 0; i < n; i++) {
        if (t[i].area < small.area) {
            small = t[i];
        }
    }
    return small;
}

void output(tri are) {
    printf("Triangle with smallest area is %f",are.area);
}

int main() {
    int n;
    n = input();
    tri t[n];
    input_n(n, t);

    for (int i = 0; i < n; i++) {
        t[i] = areaa(t[i]);
    }

    tri small = smallest(n, t);
    output(small);

    return 0;
}