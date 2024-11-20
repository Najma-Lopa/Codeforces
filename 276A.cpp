//#include<stdc++.h>
//using namespace std;
//int main()
//{
//
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//    long long t,k; cin >>t>>k;
//    long long a,b,n,mx=-1;
//    while(t--)
//    {
//        cin >> a >> b;
//        if(b>k) n=a-b+k;
//        else n=a;
//        mx=max(mx,n);
//    }
//    cout<<mx<<endl;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long joy=0;//INT32_MIN;
    while(n--)
    {
        long long t,b;
        cin>>b>>t;
        if(t>k) b-=t-k;
        if(b>joy)joy=b;
    }
    cout<<joy<<endl;
}
