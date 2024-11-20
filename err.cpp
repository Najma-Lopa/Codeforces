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
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(arr[i]==1)
        cout<<"perfect"<<endl;
        else
        {
        ll sum = 0;
        for (ll j = 1; j <= (arr[i] / 2); j++)
        {
            if ((arr[i]) % j == 0)
            {
                sum += j;
            }
        }
        if (sum > arr[i])
            cout << "abundant" << endl;
        else if (sum < arr[i])
            cout << "deficient" << endl;
        else
            cout << "perfect" << endl;}
    }
}

