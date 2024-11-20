#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       char ch;
       int flag=0;
       cin>>s;
       cin>>ch;
    //     if(s.length()==1)
    //   cout<<"NO"<<endl;
    //   int d=s.length()/2+1;
      for(int i=0;i<s.length();i=i+2)
      {
        if(s[i]==ch)
        {flag=1;
        break;}
      }
      if(flag==1)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
}