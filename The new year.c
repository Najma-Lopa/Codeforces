//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//    scanf("%d%d%d",&a,&b,&c);
//    int d=(a+b+c)/3;
//    int ans =(abs(d-a) + abs(d-b) + abs(d-c));
//    printf("%d\n",ans);
//    return 0;
//}



#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a>c)
        d=(b-a)+(a-c);
    if(b>a&&b<c)
        d=(b-a)+(c-b);
    if(c>a&&c<b)
        d=(c-a)+(b-c);
    if(a>b&&a<c)
        d=(a-b)+(c-a);
    if(b<a&&b>c)
        d=(a-b)+(b-c);
    if(c<a&&c>b)
        d=(a-c)+(c-b);
    printf("%d\n",d);
    return 0;
}
