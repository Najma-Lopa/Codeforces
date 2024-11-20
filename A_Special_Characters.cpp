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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout<<"YES"<<endl;
            char ch='A';
            for (int i = 1; i <= n/2; i++)
            {
                cout<<ch<<ch;
                ch++;
            }
            cout<<endl;
        }
    }
}