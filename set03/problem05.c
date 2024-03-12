#include<stdio.h>
#include<math.h>

int input(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    return n;
}

void init(int n,int a[n]){
    int i;
    for(i=0;i<n;i++){
        a[i] = i;
    }
}

void es(int n,int a[n]){
    int i,j;
    a[0]=2;
    for(i=2;i<n;i++){
        for(j=2;j<=sqrt(i);j++){
           if(a[i]%j==0){
               a[i]=0;
           }
        }
    }
}
    
void output(int n,int a[n]){
    int i;
    for(i=2;i<n;i++){
        if(a[i]!=0){
            printf("%d\t",a[i]);
        }
    }
}

int main(){
    int n;
    n=input();
    //init(a);
    int a[n];
    init(n,a);
    es(n,a);
    output(n,a);
    return 0;
}