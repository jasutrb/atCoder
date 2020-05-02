#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll a,b,m;
    cin >> a >> b >> m;

    vector<ll> A(a),B(b);

    rep(i,a){
        cin >> A[i];
    }
    rep(i,b){
        cin >> B[i];
    }

    ll minAB;
    minAB = *min_element(A.begin(),A.end()) + *min_element(B.begin(),B.end());
    //cout << minAB;

    //割引
    vector<ll> AB(m);
    ll x,y,c;
    rep(i,m){
        cin >> x >> y >> c;
        AB[i] = A[x-1] + B[y-1] - c;
    }

    ll ans;
    ans =  *min_element(AB.begin(),AB.end()) ;
    if(ans > minAB) ans = minAB;
    cout << ans << endl;
    return 0;

}
