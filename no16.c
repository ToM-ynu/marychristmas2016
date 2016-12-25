#include<stdio.h>

int g(int);
int main(){
  int num;
  scanf("%d",&num);
  num=g(num);
  printf("inv num is %d \n",num);
  return 0;
}

int g(int num){
  int ans =0;
  while(0<num){
    ans=ans*10+num%10;
    num=num/10;
  }
  return ans;
}

