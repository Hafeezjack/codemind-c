#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c;
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=n-1;i>=0;i--)
    {
        if(a[i]%2!=0)
        break;
    }
    printf("%d",i);
    return 0;
}