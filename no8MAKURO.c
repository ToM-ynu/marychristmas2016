#include<stdio.h>

#define  max(a,b) ((a)<(b) ? (b) :(a))

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("max is :%d\n",max(a,b));
  return 0;
}
