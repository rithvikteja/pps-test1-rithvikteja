#include<stdio.h>
struct complex
{
  int real,imaginary;
};
struct complex input_chellox()
{
  struct complex p;
  printf("Enter real and imaginary num\n");
  scanf("%d %d", &p.real,&p.imaginary);
  return p;
}
struct complex add_complex(struct complex a, struct complex b)
{
  struct complex x;
  x.real=a.real+b.real;
  x.imaginary=a.imaginary+b.imaginary;
  return x;
}
void output(struct complex a,struct complex b, struct complex x)
{
  printf("the sum of (%d+%di)+(%d+%di)=(%d+%di)", a.real,a.imaginary,b.real,b.imaginary,x.real,x.imaginary);
}
int main()
{
  struct complex a,b,c;
  a=input_chellox();
  b=input_chellox();
  c=add_complex(a,b);
  output(a,b,c);
  return 0;
}