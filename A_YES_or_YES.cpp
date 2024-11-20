#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=0;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        for(int i=0;i<3;i++)
        {
            if(s[0]=='Y' &&s[1]=='E'&&s[2]=='S')
            flag=1;
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}