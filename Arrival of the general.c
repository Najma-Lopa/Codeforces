
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],max=0,min=101,maxi,mini,res;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            maxi=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini=mini+1;
    }
    {res=maxi+(n-1)-mini;
    printf("%d\n",res);}

}
