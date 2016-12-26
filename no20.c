#include<stdio.h>

int main(){
  int array[]={9,1,3,7,0,5,4,2,8,6};
  int n,m;
  scanf("%d %d",&n,&m);
  for(int i=0;i<10;i++){
    printf("%d ",array[i]);
  }
  printf("\n");

  for(int i=n;i<=m;i++){
    for(int j=n;j<m;j++){
      if(array[j]>array[j+1]){
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
  for(int i=0;i<10;i++){
    printf("%d ",array[i]);
  }
  printf("\n");
  return 0;
}

