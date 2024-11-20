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

double minAngle(int H, int M) {
  
    double hour_angle = (30.0 * H + 0.5 * M);
 
    hour_angle = fmod(hour_angle, 360.0);

    double minute_angle = 6.0 * M;
   
    double angle_diff = abs(hour_angle - minute_angle);
    return min(angle_diff, 360.0 - angle_diff);
}

int main() {
    int H, M;
    cin >> H>>M;
    cout  << minAngle(H, M) << endl;
}
