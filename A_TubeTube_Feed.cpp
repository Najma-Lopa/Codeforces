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
        int n, t;
        cin >> n >> t;
        int arra[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arra[i];
        }
        int arrb[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arrb[i];
        }
        int maxx = -3;
        int ind = -2;
        for (int i = 0; i < n; i++)
        {
            if (arra[i] <= t)
            {
                if (arrb[i] > maxx)
                {
                    maxx = arrb[i];
                    ind = i;
                }
            }
            t--;
        }
        cout << ind+1 << endl;
    }
}