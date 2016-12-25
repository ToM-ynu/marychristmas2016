#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define LOOP 10
int main(){
  srand((unsigned)time(NULL));
  int ans = rand()%100;
  int input;
  for(int i=0;i<LOOP;i++){
    scanf("%d",&input);
    if(input==ans){
      printf("Bingo!!!!!\n");
      return 0;
    }else if(input<ans){
      printf("Too Small!!\n");
    }else{
      printf("Too Big!!\n");
    }
  }
  printf("You are Lose\n");
  return 0;
}
