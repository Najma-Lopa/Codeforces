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
        int a=0,b=0,c=0,d=0,e=0;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='T')
                a++;
            if(s[i]=='i')
                b++;
            if(s[i]=='m')
                c++;
            if(s[i]=='u')
                d++;
            if(s[i]=='r')
                e++;
        }
        if(a==1&&b==1&&c==1&&d==1&&e==1&&n==5)
            cout<< "YES"<<endl;
        else
            cout<< "NO"<<endl;

    }
}
