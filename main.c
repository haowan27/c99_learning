#include <stdio.h>
#include "fang.h"
#include "lee.h"

int main()
{
  int a,b,result;
  scanf("%d,%d",&a,&b);
  result=max(a,b);
  if(result==1)
    printf("%d\n",a);
  if(result==0)
    printf("0");
  if(result==-1)
    printf("%d\n",b);
  return 0;
}
