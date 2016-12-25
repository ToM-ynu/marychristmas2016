#include<stdio.h>
#include<math.h>
int main(){

  int a[3];
  int hoge=0;
  int hogehoge=0;
  int hogehogehoge=0;
  scanf("%d %d %d", &a[0],&a[1],&a[2]);
  int MaxNum = (int)fmax(a[0],fmax(a[1],a[2]));
  int MinNum = (int)fmin(a[0],fmin(a[1],a[2]));
  printf("%d\t",MaxNum);
  for(int i=0;i<3;i++){
    hoge=(a[i]!=MaxNum);
    hogehoge=(a[i]!=MinNum);
    hogehogehoge=(hoge==hogehoge && hoge==1);
    while(hogehogehoge){
    printf("%d\t",hogehogehoge*a[i]);
    break;
    }
  }
  printf("%d\n",MinNum);
  return 0;
}
