#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  int n;
  double diff;
  clock_t start,end;
  scanf("%d",&n);
  start=time(NULL);
  int *c;
  c=(int *)malloc((sizeof(int))*n*n);
  int *a;
  a=(int *)malloc((sizeof(int))*n*n);
  int *b;
  b=(int *)malloc((sizeof(int))*n*n);
  for(int i=0;i<n*n;i++){
    a[i]=1;
    b[i]=1;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        c[i*n+j]=a[i*j+k]+b[k*n+j];
      }
    }
  }
  end=time(NULL);
  diff= difftime(end,start);
  printf("time is %lf\n",(double)(end-start));
  return 0;
}
