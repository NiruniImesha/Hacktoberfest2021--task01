#include <stdio.h>

int main() {
  int a,b,c,d=1,e=1,f;
  printf("Enter first number : ");
  scanf("%d",&a);
  printf("Enter second number : ");
  scanf("%d",&b);

for(int i=1;i<=a;++i){
   d=d*i;
  }
for(int i=1;i<=b;++i){
   e=e*i;
  }

  printf("%d\n%d",d,e);
}
