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
    int n;
    cin>>n;
    if(n%4==1)
    cout<<"0"<<" "<<"A"<<endl;
    else if(n%4==2)
    cout<<"1"<<" "<<"B"<<endl;
    else if(n%4==3)
    cout<<"2"<<" "<<"A"<<endl;
    else
    cout<<"1"<<" "<<"A"<<endl;
}