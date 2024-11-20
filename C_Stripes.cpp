// بِسْمِ ٱللَّهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();
    string st="RRRRRRRR";
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        for(int i=0;i<8;i++)
        {
             string s;
            cin>>s;
        if(s==st)
        flag=1;
        }
        if(flag==1)
        cout<<"R"<<endl;
        else
        cout<<"B"<<endl;
    }
}