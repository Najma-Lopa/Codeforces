#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char c;
    for(int i=0; i<t; i++)
    {
        scanf("%c",&c);}
        printf("%c\n",c);

    for(int i=0; i<t; i++)
    {


        if(c=='c')
            printf("YES\n");
        if(c=='o')
            printf("YES\n");

        if(c=='d')
            printf("YES\n");

        if(c=='e')
            printf("YES\n");
        if(c=='f')
            printf("YES\n");
        if(c=='r')
            printf("YES\n");
        if(c=='s')
            printf("YES\n");
        else
            printf("NO\n");
    }
}

