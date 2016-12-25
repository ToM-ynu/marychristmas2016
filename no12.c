#include<stdio.h>
#define bios 100000000
double nbikuri(int);
int main(){
  double nepia=0;
  double x;
  for(int i=70;1<=i;i--){
    nepia=nepia+(1/nbikuri(i))*bios;
    printf("%.20lf\n",nepia);
  }
  nepia=nepia+1.0*bios;
  printf("%.20lf\n",nepia);
  return 0;
}

double nbikuri(int n){
  double ans =1;
  for(int i=1;i<n+1;i++){
    ans =ans*i;
  }
  return ans;
}
