//10. Write a C program to compare two strings, character by character.
#include<stdio.h>
void input(char *str1, char *str2){
    printf("enter 1st string: ");
    scanf("%s",str1);
    printf("enter 2nd string: ");
    scanf("%s",str2);
}

int comp(char *str1,char *str2){
     int i;
    for(i=0;str1[i]!='\0' && str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            return str1[i]-str2[i];
    }
    }
    return str1[i]-str2[i];
}
   
void output(char *str1, char *str2,int result){
    if (result<0){
        printf("%s is bigger than %s",str2,str1);
    }
    else if(result>0){
        printf("%s is bigger than %s",str1,str2);
    }
    else{
        printf("both the strings are equal");
    }
    }


int main(){
    char str1[100];
    char str2[100];
    input(str1,str2);
    int compare;
    compare=comp(str1,str2);
    output(str1,str2,compare);
    return 0;

}