#include<stdio.h>
#include<math.h>
#define size 10
double ave(double [size]);
double sigma(double [size],double,double [size],double);
double corr(double [size],double [size]);
int main(){
  double x[size]={0};
  double y[size]={0};
  for(int i=0;i<size;i++){
    x[i]=i;
    y[i]=i;
  }
  printf("%lf\n",corr(x,y));
  return 0;
}

double ave(double x[size]){
  double num=0;
  for(int i=0;i<size;i++){
    num=num+x[i];
  }
  return num/size;
}
double corr(double x[size],double y[size]){
  double x_ave=ave(x);
  double y_ave=ave(y);
  return (sigma(x,x_ave,y,y_ave)/
  sqrt(sigma(x,x_ave,x,x_ave)*sigma(y,y_ave,y,y_ave)));
}
double sigma(double x[size], double x_ave, double y[size], double y_ave){
  double all=0;
  for(int i=0;i<size;i++){
    all= all+(x[i]-x_ave)*(y[i]-y_ave);
  }
  return all;
}

