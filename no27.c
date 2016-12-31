#include<stdio.h>
#include<math.h>
struct posi{
  double x;
  double y;
  double z;
};
double d();
int main(){
  double d();
  printf("dist = %lf\n",d());
  return 0;
}
double d(){
 struct posi posi1,posi2;
 posi1.x=0;
 posi1.y=0;
 posi1.z=0;

 posi2.x=2;
 posi2.y=2;
 posi2.z=2;
 return sqrt( pow(posi1.x-posi2.x,2)+pow(posi2.y-posi2.y,2)
                +pow(posi1.z-posi2.z,2));
}
