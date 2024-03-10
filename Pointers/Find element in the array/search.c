#include <stdio.h>
int search(int *, int , int);
int main()
{
    int i,n,k;
    int a[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    printf("Enter the element you want to search in the array:");
    scanf("%d",&k);
    if(search(a,n,k))
    printf("Element found in the array!");
    else
    printf("Element not found in the array!");
    return 0;
}
int search(int *p, int n , int k)
{
    for(int i=0;i<n;i++)
    {
        if(*(p+i)==k)
        return 1;
    } 
    return 0;
}
