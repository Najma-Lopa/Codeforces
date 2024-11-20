#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m,n1,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d", &m,&n1);
       if(m>n1) count1++;
       if(n1>m) count2++;
    }
    if(count1>count2)
        printf("Mishka\n");
    if(count2>count1)
        printf("Chris\n");
    if(count1==count2)
        printf("Friendship is magic!^^\n");
    return 0;

}
