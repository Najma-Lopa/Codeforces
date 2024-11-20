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
        string s;
        cin>>s;
        int a=0,b=0,flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='U')
            {
                b++;
            }
            if(s[i]=='R')
            {
                a++;
            }
            if(s[i]=='D')
            {
                b--;
            }
            if(s[i]=='L')
            {
                a--;
            }
            if(a==1&&b==1)
            {
                cout<< "YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<< "NO"<<endl;
    }
}
