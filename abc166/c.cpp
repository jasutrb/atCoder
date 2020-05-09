#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> h(n+1);
    for(int i=1;i<=n;i++) cin >> h[i];

    //各展望台の番号を持つ配列を作り、そこに繋がる展望台がそれより高ければ-1を入れる
    vector<int> tenbo(n+1);

    rep(i,m){
        int a,b;
        cin >> a >> b;
        if(h[a] == h[b]){
            tenbo[a] = -1;
            tenbo[b] = -1;
            continue;
        }
        if(h[a] < h[b]) swap(a,b);
        tenbo[b] = -1;
    }

    //for(int i=1;i<=n;i++){
    //    cout << "i=" << i << "tenbo" << tenbo[i] << endl;
    //}

    int ans = 0;
    for(int i=1;i<=n;i++){
        if(tenbo[i] != -1) ans++;
    }
    cout << ans << endl;
    return 0;
}
