#include <stdio.h>
void sorta(int *, int);
void sortd(int *, int);
int main()
{
    int i, n;
    int a[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sorta(a, n);
    printf("Ascending sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    sortd(a, n);
    printf("Descending sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void sorta(int *p, int n)
{
    int i, j;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                *(p + i) = *(p + i) + *(p + j);
                *(p + j) = *(p + i) - *(p + j);
                *(p + i) = *(p + i) - *(p + j);
            }
        }
    }
}
void sortd(int * p, int n)
{
    int i, j;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + i) < *(p + j))
            {
                *(p + i) = *(p + i) + *(p + j);
                *(p + j) = *(p + i) - *(p + j);
                *(p + i) = *(p + i) - *(p + j);
            }
        }
    }
}
