#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    //int flag=0;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=0;
        string s;
        cin>>s;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[i+1]){
                for(int j=i+1;j<s.length();j++)
                {
                    if(s[i]==s[j])
                    {
                        flag=1;
                    }
                }
            }
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}