#include<stdio.h>
#define loop 200
#define init 100000000.0
int main(){
  long double nepia=init;
  long double x;
  long double buf;
  for(int i=loop;1<=i;i--){
    buf=(long double)i;
    nepia=init+nepia/buf;
  //printf("%.30lf\n",nepia);
  }
  printf("\n\n%.20Lf\n",nepia/init);
  //printf("\n\n%.20Lf\n",nepia);
  return 0;
}
