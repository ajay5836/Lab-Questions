#include <stdio.h>
void maxmin(int *,int ,int *,int *);
int main()
{
    int i,j,n,max,min;
    int a[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    maxmin(a,n,&max,&min);
    printf("Maximum value present in the array: %d\n",max);
    printf("Minimum value present in the array: %d\n",min);
    return 0;
}
void maxmin(int *p,int n ,int * max,int * min)
{
    *max=*min=*p;
    for(int i=0;i<n;i++)
    {
        if(*(p+i)>*max)
        *max=*(p+i);
        else if(*(p+i)<*min)
        *min=*(p+i);
    }
}