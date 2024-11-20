#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         long long a,b,c;
        cin>>a >>b >>c;
        if(((2*b-c)>0)&&(2*b-c)%a==0)
        cout<< "YES"<<endl;
      else  if((c+a)%2*b==0)
            cout<< "YES"<<endl;
      else  if(((2*b-a)>0)&&(2*b-a)%c==0)
        cout<< "YES"<<endl;
        else
        cout<< "NO"<<endl;
    }
}
//
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        long long a,b,c;
//        cin>>a>>b>>c;
//
//            int m=(2*b-c)%a;
//            int n=(a+c)%(2*b);
//            int o=(2*b-a)%c;
//            if((m==0&&(2*b)>c)||n==0||(o==0&&(2*b)>a))cout<<"YES"<<endl;
//            else cout<<"NO"<<endl;
//
//    }
//}
