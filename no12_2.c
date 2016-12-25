#include<stdio.h>
#define loop 200
#define init 100000000.0
int main(){
  double nepia=init;
  double x;
  double buf;
  for(int i=loop;1<=i;i--){
    buf=(double)i;
    nepia=init+nepia/buf;
  //printf("%.30lf\n",nepia);
  }
  printf("\n\n%.25lf\n",nepia/init);
  printf("\n\n%.20lf\n",nepia);
  return 0;
}
