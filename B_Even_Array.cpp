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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        int cntt = 0;
        int done = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0 && i % 2 != 0)
                cnt++;
            if (arr[i] % 2 != 0 && i % 2 == 0)
                cntt++;
            if (i % 2 == 0 && arr[i] % 2 == 0 || i % 2 != 0 && arr[i] % 2 != 0)
            {
                done++;
            }
        }
        if (cnt == cntt)
            cout << cnt << endl;
        else if (done == n)
            cout << "0" << endl;
        else
            cout << "-1" << endl;
    }
}