#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define pi 3.14159265359

int main() {
    int a,b,h,m;
    cin >> a >> b >> h >> m;

    double radH,radM,rad;
    radM =  2 * pi * (double)m / 60;
    radH =  2 * pi / 12 * (radM / pi / 2 + (double)h );

    rad = abs(radH-radM);
    double ans;
    //cout << "h=" << radH/pi << "m=" << radM/pi << "rad=" << rad/pi << " cos" << cos(rad)<< endl;

    //cout << "h" << radH  << endl << "m" << radM << endl <<  "rad" << rad << endl;
    ans = (double)a*(double)a + (double)b*(double)b - 2*(double)a*(double)b*cos(rad);
    //cout << cos(rad);
    //cout <<(double)a*(double)a + (double)b*(double)b << endl << 2*(double)a*(double)b*cos(rad) << endl;
    ans = pow(ans,0.5);
    printf("%.12f\n",ans);
    return 0;
}
