#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n,x,y;
    cin >> n >> x >> y;








    vector<int> a(n);
    rep(i,n) {
        cin >> a[i];
    }
    //隣の家との距離をパラメータbとする.bi = ai+1 - ai
    vector<int> b(n);
    rep(i,n-1){
        b[i] = a[i+1] - a[i];
    }
    b[n-1] = (k-a[n-1]) +a[0];   //端っこ

    //rep(i,n) cout << b[i] << " ";

    int maxi;
    maxi = *max_element(b.begin(),b.end());
    //cout << maxi;
    int ans;
    ans = k - maxi;
    cout << ans << endl;


}
