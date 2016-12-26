#include<stdio.h>

int main(){

  int array[]={1,1,2,3,5,8,13};
  int num;
  scanf("%d",&num);
  int i=0;
  while(0<=num){
    printf("%d\t",array[i]);
    i++;
    num--;
    if(6<i){
      i=0;
    }
  }
  printf("\n");
  return 0;
}
