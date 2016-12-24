#include<stdio.h>

int main(){
  int num;
hogehoge:
  scanf("%d",&num);
  if(num==-1) goto out;
  else if(num%2==0){
    printf("even\n");
    goto hogehoge;
  }
  else if(num%2==1){
    printf("odd\n");
    goto hogehoge;
  }
out:
  return 0;
}

