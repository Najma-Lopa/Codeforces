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
    int t;
    cin >> t;
    while (t--)
    {
        string s, st, stt;
        cin >> s >> st >> stt;
        int in, ind, indd;
        char ch;
        int flag = 0, flagg = 0, flg = 0;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] == '?')
        //     {
        //         in = i;
        //         flag = 1;
        //         break;
        //     }
        // }
        if (s[0] == '?')
        {
            in = 0;
            flag = 1;
        }
        else if (s[1] == '?')
        {
            in = 1;
            flag = 1;
        }
        else if (s[2] == '?')
        {
            in = 2;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        if (flag == 1)
        {
            if (in == 0)
            {
                if (s[1] == 'A' && s[2] == 'B')
                    ch = 'C';
                else if (s[1] == 'B' && s[2] == 'A')
                    ch = 'C';
                else if (s[1] == 'A' && s[2] == 'C')
                    ch = 'B';
                else if (s[1] == 'C' && s[2] == 'A')
                    ch = 'B';
                else if (s[1] == 'B' && s[2] == 'C')
                    ch = 'A';
                else if (s[1] == 'C' && s[2] == 'B')
                    ch = 'A';
            }
            else if (in == 1)
            {
                if (s[0] == 'A' && s[2] == 'B')
                    ch = 'C';
                else if (s[0] == 'B' && s[2] == 'A')
                    ch = 'C';
                else if (s[0] == 'A' && s[2] == 'C')
                    ch = 'B';
                else if (s[0] == 'C' && s[2] == 'A')
                    ch = 'B';
                else if (s[0] == 'B' && s[2] == 'C')
                    ch = 'A';
                else if (s[0] == 'C' && s[2] == 'B')
                    ch = 'A';
            }
            else
            {
                if (s[0] == 'A' && s[1] == 'B')
                    ch = 'C';
                else if (s[0] == 'B' && s[1] == 'A')
                    ch = 'C';
                else if (s[0] == 'A' && s[1] == 'C')
                    ch = 'B';
                else if (s[0] == 'C' && s[1] == 'A')
                    ch = 'B';
                else if (s[0] == 'B' && s[1] == 'C')
                    ch = 'A';
                else if (s[0] == 'C' && s[1] == 'B')
                    ch = 'A';
            }
        }

        // for (int i = 0; i < st.size(); i++)
        // {
        //     if (st[i] == '?')
        //     {
        //         ind = i;
        //         flagg = 1;
        //         break;
        //     }
        // }
        if (st[0] == '?')
        {
            ind = 0;
            flagg = 1;
        }
        else if (st[1] == '?')
        {
            ind = 1;
            flagg = 1;
        }
        else if (st[2] == '?')
        {
            ind = 2;
            flagg = 1;
        }
        else
        {
            flagg = 0;
        }
        if (flagg == 1)
        {
            if (ind == 0)
            {
                if (st[1] == 'A' && st[2] == 'B')
                    ch = 'C';
                else if (st[1] == 'B' && st[2] == 'A')
                    ch = 'C';
                else if (st[1] == 'A' && st[2] == 'C')
                    ch = 'B';
                else if (st[1] == 'C' && st[2] == 'A')
                    ch = 'B';
                else if (st[1] == 'B' && st[2] == 'C')
                    ch = 'A';
                else if (st[1] == 'C' && st[2] == 'B')
                    ch = 'A';
            }
            else if (ind == 1)
            {
                if (st[0] == 'A' && st[2] == 'B')
                    ch = 'C';
                else if (st[0] == 'B' && st[2] == 'A')
                    ch = 'C';
                else if (st[0] == 'A' && st[2] == 'C')
                    ch = 'B';
                else if (st[0] == 'C' && st[2] == 'A')
                    ch = 'B';
                else if (st[0] == 'B' && st[2] == 'C')
                    ch = 'A';
                else if (st[0] == 'C' && st[2] == 'B')
                    ch = 'A';
            }
            else
            {
                if (st[0] == 'A' && st[1] == 'B')
                    ch = 'C';
                else if (st[0] == 'B' && st[1] == 'A')
                    ch = 'C';
                else if (st[0] == 'A' && st[1] == 'C')
                    ch = 'B';
                else if (st[0] == 'C' && st[1] == 'A')
                    ch = 'B';
                else if (st[0] == 'B' && st[1] == 'C')
                    ch = 'A';
                else if (st[0] == 'C' && st[1] == 'B')
                    ch = 'A';
            }
        }
        // for (int i = 0; i < stt.size(); i++)
        // {
        //     if (stt[i] == '?')
        //     {
        //         indd = i;
        //         flg = 1;
        //         break;
        //     }
        // }
        if (stt[0] == '?')
        {
            indd = 0;
            flg = 1;
        }
        else if (stt[1] == '?')
        {
            indd = 1;
            flg = 1;
        }
        else if (stt[2] == '?')
        {
            indd = 2;
            flg = 1;
        }
        else
        {
            flg = 0;
        }
        if (flg == 1)
        {
            if (indd == 0)
            {
                if (stt[1] == 'A' && stt[2] == 'B')
                    ch = 'C';
                else if (stt[1] == 'B' && stt[2] == 'A')
                    ch = 'C';
                else if (stt[1] == 'A' && stt[2] == 'C')
                    ch = 'B';
                else if (stt[1] == 'C' && stt[2] == 'A')
                    ch = 'B';
                else if (stt[1] == 'B' && stt[2] == 'C')
                    ch = 'A';
                else if (stt[1] == 'C' && stt[2] == 'B')
                    ch = 'A';
            }
            else if (indd == 1)
            {
                if (stt[0] == 'A' && stt[2] == 'B')
                    ch = 'C';
                else if (stt[0] == 'B' && stt[2] == 'A')
                    ch = 'C';
                else if (stt[0] == 'A' && stt[2] == 'C')
                    ch = 'B';
                else if (stt[0] == 'C' && stt[2] == 'A')
                    ch = 'B';
                else if (stt[0] == 'B' && stt[2] == 'C')
                    ch = 'A';
                else if (stt[0] == 'C' && stt[2] == 'B')
                    ch = 'A';
            }
            else
            {
                if (stt[0] == 'A' && stt[1] == 'B')
                    ch = 'C';
                else if (stt[0] == 'B' && stt[1] == 'A')
                    ch = 'C';
                else if (stt[0] == 'A' && stt[1] == 'C')
                    ch = 'B';
                else if (stt[0] == 'C' && stt[1] == 'A')
                    ch = 'B';
                else if (stt[0] == 'B' && stt[1] == 'C')
                    ch = 'A';
                else if (stt[0] == 'C' && stt[1] == 'B')
                    ch = 'A';
            }
        }
        cout << ch << endl;
    }
}