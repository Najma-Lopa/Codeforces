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
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + t);
    if (t == 2)
    {
        cout << "0" << endl;
    }
    else
    {
        int ans = arr[t - 2] - arr[0];
        int an=arr[t-1]-arr[1];
        int minn=min(an,ans);
        cout << minn << endl;
    }
}