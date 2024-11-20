
#include<stdio.h>
int main()
{
    int n,x[105],i;
    double ans=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0; i<n; i++)
    {
        ans=(ans+(x[i]));
    }
    double result =ans/n;
    printf("%.12f\n",result);

}


//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n;
//    double persent, sum = 0;
//    cin >> n;
//    int array[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> array[i];
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        sum += array[i];
//    }
//
//    persent = sum / n;
//
//    cout << persent << endl;
//}
