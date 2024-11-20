#include<stdio.h>
int main()
{
    int n,x,i,count=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
        if(sum<0)
        {
            count++;
            sum=0;
        }
    }
    printf("%d\n",count);
    return 0;
}










//
//#include<stdio.h>
//int main()
//{
//    int n,a,i,sum=0,count=0;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//        scanf("%d",&a);
//        sum=sum+a;
//        if(sum<0){
//            count++;
//            sum=0;}
//    }printf("%d\n",count);
//}
