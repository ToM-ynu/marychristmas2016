#include<stdio.h>
int fibo(int,int*);
int main(){
  int n=5;
  int count=0;
  int ans=fibo(n,&count);
  printf("fibo %d is %d and tree:%d",n,ans,count);
  return 0;
}

int fibo(int n,int *count){
   *count=*count+1;
  if(n==1){
    return 1;
  }else if(n==2){
    return 1;
  }else{
    n=fibo(n-1,count)+fibo(n-2,count);
  }
  return n;
}
