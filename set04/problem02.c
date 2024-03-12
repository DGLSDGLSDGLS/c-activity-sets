#include<stdio.h>

typedef struct{
    int num;
    int den;
}frac;

frac input(){
    frac k;
    printf("Enter the numerator: ");
    scanf("%d", &k.num);  // Added address of operator &
    printf("Enter denominator: ");
    scanf("%d", &k.den);  // Added address of operator &
    return k;
}

int hcf(int a, int b){
    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

frac reduce(frac k){
    int gcd = hcf(k.num, k.den);
    k.num /= gcd;
    k.den /= gcd;
    return k;
}

int compare(frac a, frac b, frac c){
    a = reduce(a);
    b = reduce(b);
    c = reduce(c);
    if((a.num * b.den * c.den) < (b.num * a.den * c.den) && (a.num * b.den * c.den) < (c.num * a.den * b.den)){
        return 1;
    }
    else if((b.num * a.den * c.den) < (a.num * b.den * c.den) && (b.num * a.den * c.den) < (c.num * a.den * b.den)){
        return 2;
    }
    else{
        return 3;
    }
}

void output(frac a, frac b, frac c, int res){
    printf("The smallest fraction is: ");
    if(res == 1){
        printf("%d/%d\n", a.num, a.den);
    }
    else if(res == 2){
        printf("%d/%d\n", b.num, b.den);
    }
    else{
        printf("%d/%d\n", c.num, c.den);
    }
}

int main(){
    frac a, b, c;
    printf("Enter the first fraction:\n");
    a = input();
    printf("Enter the second fraction:\n");
    b = input();
    printf("Enter the third fraction:\n");
    c = input();

    int res = compare(a, b, c);
    output(a, b, c, res);
    return 0;
}
