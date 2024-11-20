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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int bi = 0, ba = 0, che = 0;
    for (int i = 1; i <= n; i = i + 3)
    {
        che = che + arr[i];
    }
    for (int j = 2; j <= n; j = j + 3)
    {
        bi = bi + arr[j];
    }
    for (int k = 3; k <= n; k = k + 3)
    {
        ba = ba + arr[k];
    }
    int maxx=max(bi,max(ba,che));
    if(maxx==bi)
    cout<<"biceps"<<endl;
    if(maxx==ba)
    cout<<"back"<<endl;
    if(maxx==che)
    cout<<"chest"<<endl;
}