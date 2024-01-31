#include<stdio.h>

struct complex {
    float real;
    float imag;
};

typedef struct complex com;

int input() {
    int n;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);
    return n;
}

com input_complex() {
    com a;
    printf("Enter real number: ");
    scanf("%f", &a.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &a.imag);
    return a;
}

void input_n(int n, com c[n]) {
    int i;
    for (i = 0; i < n; i++) {
        c[i] = input_complex();
    }
}

com add(com a, com b) {
    com sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}

com add_n(int n, com c[n]) {
    int i;
    com sum = {0, 0};
    for (i = 0; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(com sum) {
    printf("The sum of all numbers is %.2f + %.2fi\n", sum.real, sum.imag);
}

int main() {
    int n;
    n = input();
    com c[n];
    input_n(n, c);
    com summ;
    summ = add_n(n, c);
    output(summ);
    return 0;
}
