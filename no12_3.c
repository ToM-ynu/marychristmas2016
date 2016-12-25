#include<stdio.h>
#include<math.h>
#define hoge 200000000000000
#define out 30
int main(){
  long double nepia=1.0;
  long double x=(long double)hoge;
  nepia= pow(1+1/x,x);
  printf("%.30Lf\n",nepia);
  return 0;
}
