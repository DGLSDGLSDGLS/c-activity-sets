 //Write a C program to compare three numbers using **pass by value**
 #include <stdio.h>
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int compare(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

void output(int a, int b, int c, int largest) {
    printf("Numbers entered: %d, %d, %d\n", a, b, c);
    printf("The largest number is: %d\n", largest);
}

int main() {
    int num1, num2, num3, largest;
    num1 = input();
    num2 = input();
    num3 = input();
    largest = compare(num1, num2, num3);
    output(num1, num2, num3, largest);
    return 0;
}
