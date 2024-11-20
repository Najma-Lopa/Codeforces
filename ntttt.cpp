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
    int a, b;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    int m = 0;
    int index;
    for (int i = 0; i < a ; i++)
    {
        //if(arr[i]<=b)
        cnt++;
        m = max(m, cnt);
        if (arr[i] == arr[i + 1])
        {
            cnt = 0;
        }
    }
    cout << m << endl;
}