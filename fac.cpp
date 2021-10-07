#include <stdio.h>
#include <math.h> 

int main() 
{
  int a,b,c,d,e,f;
  
  scanf("%d",&a);
  scanf("%d",&b);

  d=1;
  e=1;

  for(int i=1;i<=a;++i)
  {
   d=d*i; 
  }
  
  for(int i=1;i<=b;++i)
  {
   e=e*i; 
  }
 
  printf("%d\n%d",d,e);
  
}
