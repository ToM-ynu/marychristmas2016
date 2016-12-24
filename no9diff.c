#include<stdio.h>

int main(){
  int num;
  for(;;){
    scanf("%d",&num);
    if(num==-1) break;
    else if(num%2==0){
      printf("even\n");
    }
    else if(num%2==1){
      printf("odd\n");
    }
  }
  return 0;
}

