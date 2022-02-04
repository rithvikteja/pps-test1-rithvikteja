#include<stdio.h>
int input_array_size()
{
  int m;
  printf("enter the size of array\n");
  scanf("%d",&m);
  return m;
}
void input_array(int m,int *a)
{
   int i;
   printf("enter the value of array\n");
   for(i=0;i<m;i++)
{
   scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int m,int a[m])
{
   int i,sum;
   for(i=0;i<m;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int m,int a[m],int sum )
{
  int i;
  for(i=0;i<m-1;i++)
  printf("%d+",a[i]);
  printf("%d=%d",a[m-1],sum);
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


 