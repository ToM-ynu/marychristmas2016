#include<stdio.h>


int main(){
  int n=3;
  int a[n];
  int buf=0;
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  for(int i=0;i<n;i++){
    for(int j=n-1;i<j;j--){
      if(a[i]<a[j]){
        buf=a[i];
        a[i]=a[j];
        a[j]=buf;
      
      }
    }
  }

  printf("%d %d %d",a[0],a[1],a[2]);
  return  0;
}
