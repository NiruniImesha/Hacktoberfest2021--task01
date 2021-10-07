#include <stdio.h>
//add math.h file 
#include <math.h>

int main() 
{
  //implementing variables
  int a,b,c,d,e,f;
  
  //get keyboard inputes
  scanf("%d",&a);
  scanf("%d",&b);
  
  //assign values for some variables
  d=1;
  e=1;

  for(int i=1;i<=a;++i){
   d=d*i; 
  }
  for(int i=1;i<=b;++i){
   e=e*i; 
  }
 
  printf("%d\n%d",d,e);
}
