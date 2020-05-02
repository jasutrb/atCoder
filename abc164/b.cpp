#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n,m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    ll ans=n;
    rep(i,m) ans -= a[i];
    if(ans<0){
        cout << "-1" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}
