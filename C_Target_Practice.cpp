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
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0;
        int z = 5;
        string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
        cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10;

        for (int i = 0; i < 10; i++)
        {
            if (s1[i] == 'X')
            {
                a++;
            }
            if (s10[i] == 'X')
            {
                a++;
            }
        }
        if (s2[0] == 'X')
            a++;
        if (s2[9] == 'X')
            a++;
        if (s3[0] == 'X')
        {
            a++;
        }
        if (s3[9] == 'X')
            a++;
        if (s4[0] == 'X')
        {
            a++;
        }
        if (s4[9] == 'X')
            a++;
        if (s5[0] == 'X')
        {
            a++;
        }
        if (s5[9] == 'X')
            a++;
        if (s6[0] == 'X')
        {
            a++;
        }
        if (s6[9] == 'X')
            a++;
        if (s7[0] == 'X')
        {
            a++;
        }
        if (s7[9] == 'X')
            a++;
        if (s8[0] == 'X')
        {
            a++;
        }
        if (s8[9] == 'X')
            a++;
        if (s9[0] == 'X')
        {
            a++;
        }
        if (s9[9] == 'X')
            a++;
        for (int i = 1; i < 9; i++)
        {
            if (s2[i] == 'X')
                b++;
            if (s9[i] == 'X')
                b++;
        }
        if (s3[1] == 'X')
        {
            b++;
        }
        if (s3[8] == 'X')
            b++;
        if (s4[1] == 'X')
        {
            b++;
        }
        if (s4[8] == 'X')
            b++;
        if (s5[1] == 'X')
        {
            b++;
        }
        if (s5[8] == 'X')
            b++;
        if (s6[1] == 'X')
        {
            b++;
        }
        if (s6[8] == 'X')
            b++;
        if (s7[1] == 'X')
        {
            b++;
        }
        if (s7[8] == 'X')
            b++;
        if (s8[1] == 'X')
        {
            b++;
        }
        if (s8[8] == 'X')
            b++;
        for (int i = 2; i < 8; i++)
        {
            if (s3[i] == 'X')
                c++;
            if (s8[i] == 'X')
                c++;
        }
        if (s4[2] == 'X')
        {
            c++;
        }
        if (s4[7] == 'X')
            c++;
        if (s5[2] == 'X')
        {
            c++;
        }
        if (s5[7] == 'X')
            c++;
        if (s6[2] == 'X')
        {
            c++;
        }
        if (s6[7] == 'X')
            c++;
        if (s7[2] == 'X')
        {
            c++;
        }
        if (s7[7] == 'X')
            c++;
        for (int i = 3; i < 7; i++)
        {
            if (s4[i] == 'X')
                d++;
            if (s7[i] == 'X')
                d++;
        }
        if (s5[3] == 'X')
        {
            d++;
        }
        if (s5[6] == 'X')
            d++;
        if (s6[3] == 'X')
        {
            d++;
        }
        if (s6[6] == 'X')
            d++;
        for (int i = 4; i < 6; i++)
        {
            if (s5[i] == 'X')
                e++;
            if (s6[i] == 'X')
                e++;
        }
        int ans = a + (b * 2) + (c * 3) + (d * 4) + (e * 5);
        cout << ans << endl;
    }
}