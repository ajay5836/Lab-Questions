#include <stdio.h>
void revarray(int * , int);
int main()
{
    int a[50];
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    revarray(a,n);
    printf("reversed array: ");
    for(i=0;i<n;i++)
    printf("%d ",*(a+i));
    return 0;
}
void revarray(int *p, int n)
{
    int *r,t;
    r=(p+n)-1;
    for(int i=0;i<n/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(r-i);
        *(r-i)=t;
    }
}