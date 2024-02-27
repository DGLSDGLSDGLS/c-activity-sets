//6. Write a program to find the index of a substring of a string
//void input(char *a, char *b);
//int sub(char *a, char *b);
//void output(char *b, int index);

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(char *a,char *b){
    printf("enter a string: ");
    scanf("%s",a);
    printf("enter substring: ");
    scanf("%s",b);
}

int sub(char *a,char *b){
    int string;
    int subs;
    string=strlen(a);  
    subs=strlen(b);
    int i;
    int j;
    for(i=0;i<=string-subs;i++){
        for(j=0;j<subs;j++){
            if(a[i+j]!=b[j]){
                break;
            }
        }
        if(j==subs){
            return i;
        }
    }
    return -1;
}

void output(char *b, int index){
    if(index!=-1){
        printf("the substring index is %d",index);
    }
    else{
        printf("no substring found");
    }
}

int main(){
    char a[100],b[100];
    input(a,b);
    int substr;
    substr=sub(a,b);
    output(b,substr);
    return 0;
}