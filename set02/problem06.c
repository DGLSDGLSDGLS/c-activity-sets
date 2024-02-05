//Write a program to reverse a string.
#include<stdio.h>
#include<stdlib.h>

void input(char *a){
    printf("enter sstring to reverse: ");
    scanf("%s",a);
}

int len(char *str){
    int l;
    for(l=0;str[l]!='\0';l++)
    ;
    return l;
}

void str_reverse(char *str,char *rev_str){
    int i;
    i=len(str);
    int x;
    for(x=0;str[x]!='\0';x++){
        i=i-1;
        rev_str[x]=str[i];
    }
    rev_str[x]='\0';  //only this line was copied ,cause i didnt know;
}

void output(char *a){
    printf("the reversed string id %s",a);
}

int main(){
    char str[100];
    char rev_str[100];
    input(str);
    str_reverse(str,rev_str);
    output(rev_str);
    return 0;
}