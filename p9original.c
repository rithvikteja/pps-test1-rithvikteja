#include<stdio.h>
#include<string.h>
void input_two_string(char *a,char *b)
{
  printf("enter the two string\n");
  scanf("%s",a);
  scanf("%s",b);
}
int sqr_cmp(char *a,char *b)
{
  int i,n;
  for(int i=0;(a[i] && a[i]==b[i]);i++);
  n=a[i]-b[i];
  return n;
}
void output(char *a,char *b,int result)
{
  if(result<0)
  {
    printf("%s is greater than %s \n",a,b);
  }
  else if(result >0)
  {
    printf("%s is greater than %s \n",a,b);
  }
  else
  {
    printf("%s is equal to %s \n",a,b);
  }
}
int main()
{
  int n;
  char a[20],b[20];
  input_two_string(a,b);
  n=sqr_cmp(a,b);
  output(a,b,n);
  return 0;
}
