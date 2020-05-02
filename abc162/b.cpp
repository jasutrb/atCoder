#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n;
    cin >> n;
    //cout << "n=" << n << endl;
    ll sum = n*(n+1)/2;
    ll nx;
    nx = n / 3;
    //cout << "nx=" << nx << endl;
    ll sum3 = nx*3*(nx+1)/2;
    nx = n / 5;
    //cout << "nx=" << nx << endl;
    ll sum5 = nx*5*(nx+1)/2;
    nx = n / 15;
    //cout << "nx=" << nx << endl;
    ll sum15 = nx*15*(nx+1)/2;
    ll ans = sum - (sum3 + sum5 - sum15);
    cout << ans << endl;
return 0;
}
