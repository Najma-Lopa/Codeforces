//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define fl float

int main()
{
    optimize();
    int a,b;
    cin>>a>>b;
    int s=a+b;
    if(s==3)
    {
        cout<<"3"<<endl;
    }
    else if(s==4)
    {
        cout<<"2"<<endl;
    }
    else if(s==5)
    {
        cout<<"1"<<endl;
    }
}