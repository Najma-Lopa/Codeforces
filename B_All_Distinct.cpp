// بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

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
        int n;
        cin >> n;
        int arr[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        int evn = 0;
        int ans = 0;
        for (auto u : m)
        {
            if (u.second % 2 == 0)
            {
                evn++;
            }
            else
            {
                ans += 1;
            }
        }
        ans += (evn / 2)*2;
        cout << ans<< endl;
    }
}