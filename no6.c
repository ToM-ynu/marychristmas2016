#include<stdio.h>

int add(int);
int main(){
  int x;
  scanf("%d",&x);
  printf("0+1=%d\n",add(0));
  printf("3x+1=%d\n",add(3*x));
  printf("x+1+1=%d\n",add(x+1));

  return 0;
}

int add(int x){
  return 1+x;
}
