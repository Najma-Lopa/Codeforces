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
        int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int ans = 0;

    int s = 0, t = 0;
    if (a1 > b1)
        s++;
    else if (a1 < b1)
        t++;
    if (a2 > b2)
        s++;
    else if (a2 < b2)
        t++;
    if (s > t)
        ans++;

    s = t = 0;
    if (a1 > b2)
        s++;
    else if (a1 < b2)
        t++;
    if (a2 > b1)
        s++;
    else if (a2 < b1)
        t++;
    if (s > t)
        ans++;

    s = t = 0;
    if (a2 > b1)
        s++;
    else if (a2 < b1)
        t++;
    if (a1 > b2)
        s++;
    else if (a1 < b2)
        t++;
    if (s > t)
        ans++;

    s = t = 0;
    if (a2 > b2)
        s++;
    else if (a2 < b2)
        t++;
    if (a1 > b1)
        s++;
    else if (a1 < b1)
        t++;
    if (s > t)
        ans++;

    cout << ans << endl;
    }

    return 0;
}