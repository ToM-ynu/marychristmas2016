#include<stdio.h>

int main(){
  int num;
loop:
  scanf("%d",&num);
  if(num==-1) goto out;
  else if(num%2==0){
    printf("even\n");
    goto loop;
  }
  else if(num%2==1){
    printf("odd\n");
    goto loop;
  }
out:
  return 0;
}

