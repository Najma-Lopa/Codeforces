#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    optimize();
    ll t, n, i, j;
    cin >> t;
    for (ll p = 1; p <= t; p++)
    {
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        ll cnt = 0, num = n, k = 0, s1 = 0, s2 = 0, s3 = 0;
        for (j = 0; j < n; j++)
        {
            if (arr1[j] == arr2[k])
            {
                s1++;
                k++;
            }
        }
        k = n - 1;
        for (i = n - 1; i >= 0; i--)
        {
            if (arr2[k] == arr1[i])
            {
                s2++;
                k--;
            }
        }
        ll p1 = s1, p2 = s2;
        s3 = s1 + s2;
        // cout<<s3<<endl;
        s3 = n - s3;
        s1 = n - s1;
        s2 = n - s2;

        ll ans = min(s1, s2);
        ans = min(ans, s3);
        int flag = 1;
        for (i = 0; i < n; i++)
        {
            if (arr1[i] != arr2[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "Case " << p << ": " << ans << endl;
        else
            cout << "Case " << p << ": "
                 << "0" << endl;
    }
}