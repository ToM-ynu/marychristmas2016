#include<stdio.h>

int loop(int);
int main(){
  int x;
  scanf("%d",&x);
  printf("x!=%d\n",loop(x));
  return 0;
}



int loop(int x){
  static int ans =1;
  if(x==1){
    return ans;
  }
  else{
    ans = x*loop(x-1);
  }
  return ans;
}
