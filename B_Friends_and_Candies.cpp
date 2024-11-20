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
        int sum = 0;
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        if (sum % n != 0)
            cout << "-1" << endl;
        else
        {
            sum = sum / n;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > sum)
                {
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }
}
