#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    if(a>b){
       c=b;
       d=(a-b)/2;
       }
    else{
        c=a;
        d=(b-a)/2;
        }
        printf("%d %d",c,d);
        return 0;


}
