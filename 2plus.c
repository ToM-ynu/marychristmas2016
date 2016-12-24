#include<stdio.h>

int main(){
  float num;
  scanf("%f",&num);
  printf("%.4f\n",num);
  printf("%.3e\n",num);
  printf("%.2f\n",num*100);
  return 0;
}
