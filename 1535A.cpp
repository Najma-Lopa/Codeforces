#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a >>b >>c >>d;
        if(b>a&&c>d&&b>d&&c>a)
            cout<<"YES"<< " ";
        else if(b>a&&d>c&&b>c&&d>a)
            cout<<"YES"<< " ";
        else if(a>b&&c>d&&a>d&&c>b)
            cout<< "YES"<< " ";
        else if(a>b &&d>c&&a>c&&d>b)
            cout<< "YES"<< " ";
        else
            cout<< "NO"<< " ";
    }
}
