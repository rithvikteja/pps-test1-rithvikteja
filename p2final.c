#include<stdio.h>
int input()
{
  int a;
  printf("enter the numbers\n");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int k=a+b;
  return k;
}
void output(int a,int b,int sum)
{
  printf("%d+%d=%d",a,b,sum);
}
int main()
{
  int a=input();
  int b=input();
  int sum=add(a,b);
  output(a,b,sum);
  return 0;
}