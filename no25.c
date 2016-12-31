#include<stdio.h>
int stlen(char*);
int main(){
  char hoge[]="KURAMITSU is GOD";
  printf("hogehogei %d  \n",sizeof hoge /sizeof hoge[0]-1);
  printf("char size is %d\n",stlen(hoge));
  return 0;
}
int stlen(char *s){
  int i=0;
  int length=0;
  while(s[i]!='\0'){
    length++;
    i++;
  }
  return length;
}
