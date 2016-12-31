#include<stdio.h>
#include<stdlib.h>

int main(){
  FILE *fp;
  char s[256];
  int line=0;
  int num=0;
  int hoge=0;
  if((fp=fopen("no25.c","r"))==NULL){
    printf("file open \n");
    exit(-1);
  }
  while(fgets(s,256,fp)!=NULL){
    line++;
    for(int i=0;i<256;i++){
      if(s[i]=='\0'){
        hoge=0;
        num++;
        break;
      }
      if((65<=s[i]&&s[i]<=90)||(97<=s[i]&&s[i]<=122)){
        hoge=100;
      }else{
        if(hoge==100){
          num++;
        }
        hoge=0;
      }
    }
    printf("%s",s);
  }
  printf("num is %d line is %d\n",num,line);
  fclose(fp);
  return 0;
}
