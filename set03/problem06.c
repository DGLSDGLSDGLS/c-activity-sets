//6. Write a program to find the index of a substring of a string

#include<stdio.h>
#include<stdlib.h>

void input(char *a){
    printf("enter a string to reverse: ");
    scanf("%s",a);
}

int rev(char *a){
    for(int i=0;a[i]!='\0';i++){
        for(int x=i;a[i]=='\0';x--){
            a[i]=a[x];
        }
    }
    return a;
}

void output(char a){
    pirntf("the reversed string is %s",a);
}

int main()
{
    char a[100];
    input(a);
    int revv;
    revv=rev(a);
    output(revv);
}