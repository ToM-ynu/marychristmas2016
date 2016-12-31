#include<stdio.h>
#include<time.h>

int main(){
  time_t hoge=time(NULL);
 struct tm *now=localtime(&hoge);
  printf("%d/%d/%d %d:%d:%d\n",
    1900+now->tm_year,now->tm_mon+1,now->tm_mday,
    now->tm_hour,now->tm_min,now->tm_sec);
  return 0;
}
