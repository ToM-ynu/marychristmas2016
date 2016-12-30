#include<stdio.h>
#define M 5
#define N 9
void print_area(int area[M+2][N+2]){
  printf("\n\n");
  for(int i=1;i<M+1;i++){
    for(int j=1;j<N+1;j++){
      if(area[i][j]==0){
        printf(".");
        //printf("0 ");
      }else if(area[i][j]==1){
       printf("*");
       //printf("1 ");
      }
    }
    printf("\n");
  }
  printf("\n\n\n\n");
}
void array_cp(int area[M+2][N+2],int buf[M+2][N+2]){
  for(int i=0;i<M+2;i++){
    for(int j=0;j<N+2;j++){
      area[i][j]=buf[i][j];
    }
  }
}
int main(){
  int area[M+2][N+2]={0};
  int buf[M+2][N+2]={0};
  int dx[]={1,1,0,-1,-1,-1,0,1};
  int dy[]={0,-1,-1,-1,0,1,1,1};
  //set init state
    for(int j=3;j<N-1;j++){
      area[3][j]=1;
    }
    print_area(area);

    int alive=0;
    int hoge=0;
  while(hoge<=15){
    hoge++;
    array_cp(buf,area);
    for(int i=1;i<M+1;i++){
      for(int j=1;j<N+1;j++){
        alive=0;
        for(int l=0;l<8;l++){
          /*
          if(0<=(i+dx[n])&&(i+dx[n])<M+2
               && 0<=(j+dy[n]) &&(j+dy[n])<N+2)*/{
            //boundary => true
            if(area[i+dx[l]][j+dy[l]]==1){
              alive++;
            }
          }
        }
        //printf("%d ",alive);
        if(area[i][j]==0){//dead
          if(alive==3){
            buf[i][j]=1;
          }
        }else if(area[i][j]==1){
          if(alive<=1||4<=alive){
            buf[i][j]=0;//dead
          }
        }
        alive=0;
      }
      //printf("\n");
    }
    print_area(buf);
    array_cp(area,buf);
  }
  return 0;
}

