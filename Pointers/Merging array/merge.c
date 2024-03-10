#include<stdio.h>
int main()
{
    int i,m,n;
    int a[25];
    int b[25];
    int c[50];
    printf("Enter the size of array 1: ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    scanf("%d",a+i);
    printf("Enter the size of array which is  to be merged with array1: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",b+i);
    printf("Merged Array: ");
    for(i=0;i<m+n;i++)
    {
        if(i<m)
        *(c+i)=*(a+i);
        else
        *(c+i)=*(b-m+i);
        printf("%d ",*(c+i));
    }
    return 0;

}