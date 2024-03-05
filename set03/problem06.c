//6. Write a program to find the index of a substring of a string
#include<stdio.h>
#include<string.h>

void input(char *a,char *b){
    printf("enter big string: ");
    scanf("%s",a);
    printf("enter substring to find: ");
    scanf("%s",b);
}

int sub(char *str,char *substr){
    int len_a;
    int len_b;
    len_a=strlen(str);
    len_b=strlen(substr);
    int i;
    int j;
    for(i=0;len_a-len_b<len_a;i++){
        for(j=0;j<len_b;j++){
            if(substr[j]!=0){
                printf("%d",j);
            }
        }
    }
}

int main(){
    char a[100];
    char b[100];
    input(a,b);
    int subb;
    subb=sub(a,b);
    return 0;
}