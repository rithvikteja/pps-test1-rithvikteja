#include<stdio.h>
int input_array_size()
{
  int m;
  printf("enter the size of array\n");
  scanf("%d",&m);
  return m;
}
void input_array(int n,int a[n])
{
   int i;
   printf("enter the value of array\n");
   for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
   int i,sum;
   for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n,int a[n],int sum )
{
  int i;
  for(i=0;i<n-1;i++)
  printf("%d+",a[i]);
  printf("%d=%d",a[n-1],sum);
}
int main()
{
  int n,x;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  x=sum_n_arrays(n,a);
  out_put(n,a,x);
  return 0;
}


 