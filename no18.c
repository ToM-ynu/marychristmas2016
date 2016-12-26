#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dice();
int main(){
  srand((unsigned)time(NULL));
  int num;
  int val[6]={0};
  for(int i=0;i<60;i++){
    val[dice()]++;
  }
  for(int i=1;i<=6;i++){
    printf("%d is %d /60\n",i,val[i]);
  }
  return 0;
}

int dice(){
  return rand() %6+1;
}
