#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1 >>s2;
       int flag=0;
        for(int i=0;i<n;i++)
        {
                if(s1[i]=='G'&&s2[i]=='B'||s1[i]=='B'&&s2[i]=='G'||s1[i]=='G'&&s2[i]=='G'||s1[i]=='B'&&s2[i]=='B'||s1[i]=='R'&&s2[i]=='R')
                    flag++;
        }
        if(flag==n)
            cout<< "YES"<<endl;
        else
            cout<< "NO"<<endl;
    }
}