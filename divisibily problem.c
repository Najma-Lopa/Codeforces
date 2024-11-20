#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a,b,d,c;
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a%b==0)
            printf("0\n");
        if(a%b!=0 && a<b)
        {
            c=b-a;
            printf("%d\n",c);
        }
        if(a%b!=0 && a>b)
        {
            d=a%b;
            c=b-d;
            printf("%d\n",c);
        }
    }
    return 0;
}
