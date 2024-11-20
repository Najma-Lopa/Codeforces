#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,n;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>n;
       cin>>s;
       if(n==1) 
       cout<<"YES"<<endl;
       else if(n==2)
       {
           if(s[0]!=s[1]) 
           cout<<"YES"<<endl;
           else 
           cout<<"NO"<<endl;
       }
         else 
         cout<<"NO"<<endl;
   }
}
