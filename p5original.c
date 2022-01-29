#include<stdio.h>
void cmp(int a,int b,int c,int *large)
{ 
if(a>b)
{
  if(a>c)
  {
    *large=a;
  }
  else
  {
    *large=c;
  }
}
else
{
  if(b>c)
{
  *large=b;
}
else
{
  *large=c;
}
}
}
void input(int *a,int *b,int *c)
{
  printf("enter three numbers\n");
  scanf("%d%d%d",a,b,c);
}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  cmp(a,b,c,&large);
  printf("%d is the largest of three",large);
  return 0;
}