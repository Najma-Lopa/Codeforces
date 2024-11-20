
#include<stdio.h>
int main()
{
    int array[10010],n,i,max;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=0; i<n; i++)
    {
        if(max<array[i])
            max=array[i];
    }
    int m=0;
    for(i=0; i<n; i++)
    {
        m=m+max-array[i];
    }
    printf("%d\n",m);
}
