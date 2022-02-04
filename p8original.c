#include<stdio.h>
float input()
{
  int f;
  printf("enter the number\n");
  scanf("%d",&f);
  return f;
}
float my_sqrt(float f)
{
  float sqrt;
  float a=f/2;
  float a2=f;
  while(a2!=a)
  {
    a2=a;
    a=((f/a)+a)/2;
  }
  return a;
}
void output(float f,float sqrt)
{
  printf("square root of %f=%f\n",f,sqrt);
}
int main()
{
  float sqrt,f;
  f=input();
  sqrt=my_sqrt(f);
  output(f,sqrt);
  return 0;
}