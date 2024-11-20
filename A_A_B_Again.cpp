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
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin >> n;
    int ans, p=0;
    while (n)
    {
         p += n % 10;
        n = n / 10;

    }
    cout <<p<<endl;
    }
}


