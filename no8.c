#include<stdio.h>
#include<math.h>
int max(int a,int b);
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d",max(a,b));
  return 0;
}
/*
int max(int a,int b){
  if(a<b) return b;
  else return a;
}
int max(int a,int b){
  if(a<b) return b;
  return a;
}
*/
int max(int a,int b){
  return (int)fmax(a,b);
}
