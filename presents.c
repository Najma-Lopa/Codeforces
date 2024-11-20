#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    int g[n];
    for(i=1;i<=n;i++)
    {
       scanf("%d",&a[i]);
       g[a[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",g[i]);
    }
    return 0;
}
