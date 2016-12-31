#include<stdio.h>
int x,y,z=0;
int main(){
  int a,b,c=0;
  int nums[10]={0};
  printf("x address is %p\n",&x);
  printf("y address is %p\n",&y);
  printf("z address is %p\n",&z);
  printf("a address is %p\n",&a);
  printf("b address is %p\n",&b);
  printf("c address is %p\n",&c);
  for(int i=0;i<10;i++){
    printf("nums[%d] address is %p\n",i,&nums[i]);
  }
  return 0;
}
