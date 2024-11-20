#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt=0;
    cin >> t;
     int a;
//while(t--)
for(int i=0;i<t;i++)
    {
       cin >> a;
        if(a%2)
            cnt++;
    }

    if (cnt%2)
        cout << cnt << endl;
    else
        cout << t-cnt << endl;
}

