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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    int ind1 = 0, ind2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int minn = 0;
        minn = abs(arr[i + 1] - arr[i]);
        if (minn < ans)
        {
            ans = minn;
            ind1 = i + 1;
            ind2 = i + 2;
        }
    }
    int l = abs(arr[n - 1] - arr[0]);
    if (l < ans)
    {
        ind1 = n;
        ind2 = 1;
    }

    cout << ind1 << " " << ind2 << endl;
}