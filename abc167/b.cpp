#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    ll ans=0;
    if(k>a){
        ans = a;
        k -= a;
    }else{
        cout << k << endl;
        return 0;
    }

    if(k>b){
        k -=b;
    }else{
        cout << ans << endl;
        return 0;
    }

    ans -= k;
    cout << ans << endl;
    return 0;
}
