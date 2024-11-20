#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;

        for (int i = 0; i < 10; i++)
        {
            string st;
            cin >> st;

            for (int j = 0; j < 10; j++)
            {
                {
                    if ((st[j] == 'X' && i == 0) || (st[j] == 'X' && i == 9) || (st[j] == 'X' && j == 0) || (st[j] == 'X' && j == 9))
                    {
                        cnt += 1;
                        // cout << i << " " << cnt << endl;
                    }
                    else if ((st[j] == 'X' && i == 1) || (st[j] == 'X' && i == 8) || (st[j] == 'X' && j == 1) || (st[j] == 'X' && j == 8))
                    {
                        cnt += 2;
                        // cout << i << " " << cnt << endl;
                    }
                    else if ((st[j] == 'X' && i == 2) || (st[j] == 'X' && i == 7) || (st[j] == 'X' && j == 2) || (st[j] == 'X' && j == 7))
                    {
                        cnt += 3;
                        // cout << i << " " << cnt << endl;
                    }
                    else if ((st[j] == 'X' && i == 3) || (st[j] == 'X' && i == 6) || (st[j] == 'X' && j == 3) || (st[j] == 'X' && j == 6))
                    {
                        cnt += 4;
                        // cout << i << " " << cnt << endl;
                    }
                    else if ((st[j] == 'X' && i == 4) || (st[j] == 'X' && i == 5) || (st[j] == 'X' && j == 4) || (st[j] == 'X' && j == 5))
                    {
                        cnt += 5;
                        // cout << i << " " << cnt << endl;
                    }
                }
            }
        }

        cout << cnt << endl;
    }
}