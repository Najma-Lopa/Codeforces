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
        int arr[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (is_sorted(arr, arr + n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            int ind, ind2;
            vector<int> v;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    ind = i + 1;
                    ind2 = i + 1 + 1;
                    break;
                }
            }
            // cout<<ind<<ind2<<endl;
            int p = arr[0];
            int q = arr[n - 1];
            for (int i = ind; i < n; i++)
            {
                v.push_back(arr[i]);
                // cout<<arr[i];
            }
            for (int i = 0; i < ind; i++)
            {
                v.push_back(arr[i]);
            }
            vector<int> v2;
            v2 = v;
            sort(v.begin(), v.end());
            if (v2 == v)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
