#include <stdio.h>
#include <math.h>
int input(){
  printf("pls enter a number: ");
  int x;
  scanf("%d",&x);
  return x;
}

void init_array(int n, int a[]){       //all the odd numbers because anyways all the even numbers are divisible by 2
  a[0]=2;
  for(int i=1,j=3;j<=n;i++,j+=2){
    a[i]=j;
  }
}

void erotosthenes_sieve(int n, int a[n]){
  for(int i=0;a[i]<n;i++){
    for(int j=3;j<sqrt(a[i])+1;j+=2){    //j=3 is very important
      if(a[i]%j==0 && a[i]!=j){
        a[i]=0;                  // main condition for all nested loops
      }
    }
  }
}
void output(int n, int a[]){
  for(int i=0;a[i]<n;i++){   // read answer from the top function 
    if(a[i]!=0){             // if the element is 0 then it is a composite number,but we need to find prime number
      printf("%d\t",a[i]);   // now printing the number
    }
    
  }
}
int main(){
  int n=input();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
}