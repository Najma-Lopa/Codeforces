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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char,int>m;
        for(int i=0;i<4;i++)
        {
            m[s[i]]++;
        }
        int d;
        int maxx=0;
        for(auto u:m)
        {
            if(u.second>maxx)
            maxx=u.second;
        }
            if(maxx==1)
            {d=4;}
            else if(maxx==4)
            {d=-1;}
            else if(maxx==2)
            {d=4;}
            else if(maxx==3)
            {
                d=6;
            }

        
        // if(m.size()==1)
        // {
        //     cout<<"-1"<<endl;
        // }
        // else if(m.size()==4)
        // cout<<"4"<<endl;
        // else
        // {
        //     for(auto u:m)
        //     {
        //         if(u.second==3)
                // {
                    cout<<d<<endl;
                // }
            }
            //cout<<"4"<<endl;
        }