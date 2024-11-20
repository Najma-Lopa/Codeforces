#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int sz=s.size();
        if(sz%2!=0)
            cout<< "NO"<<endl;
        else
        {
           int d=sz/2;
           string s1,s2;
           s1=s.substr(0,d);
           s2=s.substr(d);
           if(s1==s2)
            cout<< "YES"<<endl;
           else
            cout<< "NO"<<endl;
        }
    }
}
