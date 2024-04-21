#include<stdio.h>
void main()
{
  int n,i,max,min;
  printf("enter the size of an array: ");
  scanf("%d",&n);

  int a[100];
  int *p=&a[0];
  printf("enter the elemnts:");
  for(i=0;i<n;i++)
  scanf("%d",p+i);
  max=min=*p;
  for(i=0;i<n;i++)
  {
      if(*(p+i)>max)
      max=*(p+i);
      else if(*(p+i)<min)
      min=*(p+i);
  }
  printf("maximum value:%d\n",max);
  printf("minimum value:%d\n",min);

} 