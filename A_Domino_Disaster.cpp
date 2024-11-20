#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;

        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == 'U')
            {
                st[i] = 'D';
            }
            else if (st[i] == 'D')
            {
                st[i] = 'U';
            }
        }
        cout << st << endl;
    }
}