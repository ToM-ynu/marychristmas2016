#include<stdio.h>

int printbits(int);
int main(){
  int hoge=245;
  scanf("%d",&hoge);
  printbits(hoge);
  return 0;
}


int buf;
int printbits(int num){
  for(int i=31;0<=i;i--){
    buf=1<<i;
    if(num&buf){
      printf("1");
    }else{
      printf("0");
    }
  }
  printf("\n");
  return 0;
}


