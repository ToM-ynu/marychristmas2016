#include<stdio.h>

int loop(int);
int main(){
  int x;
  scanf("%d",&x);
  printf("x!=%d\n",loop(x));
  return 0;
}



int loop(int x){
  int ans =1;
  for(int i=1;i<=x;i++){
    ans =ans*i;
  }
  return ans;
}
