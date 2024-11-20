#include<stdio.h>
int main()
{
    int t,i;
    char s[2005];
    scanf("%d",&t);
    scanf("%s",&s);
    t-=1;
    for(i=t-1;i>=0;i-=2)
    {
        printf("%c",s[i]);
    }
    if(t%2==0)
        i=0;
    else
        i=1;
    for(i;i<=t;i+=2)
        printf("%c",s[i]);
}
