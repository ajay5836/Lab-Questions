#include <stdio.h>
#include <string.h>
void sortString(char *, int );
int main()
{
    char a[100];
    printf("Enter the string: ");
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0'; // to remove the null character from the string
    int l= strlen(a);
    sortString(a,l);
    printf("Sorted String: ");
    puts(a);
    return 0;
}
void sortString(char *p, int l)
{
    int i,j;
    for(i=0;i<l-1;i++) // sorting of the string
    {
        for(j=i+1;j<l;j++)
        {
            if(*(p+i)>*(p+j))
            {
                *(p+i) = *(p+i) + *(p+j);
                *(p+j) = *(p+i) - *(p+j);
                *(p+i) = *(p+i) - *(p+j);
            }
        }
    }
    
    for(i=0; *(p+i)==' ' ;i++); // removing spaces from the sorted string
    
    for(j=0;*(p+i)!='\0';j++,i++)
    {
        *(p+j) = *(p+i);
    }

}