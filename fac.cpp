#include <stdio.h>
#include <math.h>

int main() {
  int a,b,c,d,e;
  
  d=1;//declare the variabels
  e=1;
  
  printf("Enter first number : ");
  scanf("%d",&a);//Input Number
  printf("Enter second number : ");
  scanf("%d",&b);

for(int i=1;i<=a;++i){ //for loop
   d=d*i; // calculation the amount
  }
for(int i=1;i<=b;++i){
   e=e*i; 
  }
 
  printf("%d\n%d",d,e);//Display output
}
