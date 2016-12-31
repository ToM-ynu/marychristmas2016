#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  FILE *fp;
  int array[100][100]={0};
  double ram=0;
  srand((unsigned)time(NULL));
    for(int i=2;i<100;i++){
      for(int j=0;j<1000;j++){
          for(int k=0;k<i;k++){
            ram=ram+rand();
          }
          ram=ram/i/RAND_MAX;//0~1
          array[(int)(ram*100)][i]++;
      }
    }
    for(int i=0;i<100;i++){
      printf("%.2f",(float)i/100);
      for(int j=0;j<100;j++){
        printf("\t%d",array[j][i]);
      }
      printf("\n");
    }
  fp=fopen("hoge.csv","w");
  if(fp==NULL){
    printf("fuckfuckfuck\n");
    exit(1);
  }
    for(int i=0;i<100;i++){
      fprintf(fp,"%.2f",(float)i/100);
      for(int j=0;j<100;j++){
       fprintf(fp,"%d ",array[j][i]);
      }
      fprintf(fp,"\n");
    }
    fclose(fp);
    return 0;
}
