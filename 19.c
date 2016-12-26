#include<stdio.h>
#define hoge 10000
int main(){
  int num[hoge];
  for(int i=0;i<hoge;i++){
    num[i]=2+i;
  }
  for(int i=2;i<hoge;i++){
    for(int j=1;j<hoge;j++){
      if(num[j]!=0&&num[j]%i==0&&num[j]/i!=1){
        num[j]=0;
      }
    }
  }
  int hogehoge=0;
  for(int i=0;i<hoge;i++){
    if(num[i]!=0){
      printf("%d  ",num[i]);
      hogehoge++; 
      if(hogehoge%10==0){
        printf("\n");
        hogehoge=1;
      }
    }
  }
  printf("\n");
  return 0;
}

