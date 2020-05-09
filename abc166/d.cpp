#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int x;
    cin >> x;
    vector<ll> f;
    f.push_back(0);
    ll n=1;
    while(1){
        //nの五乗を生成
        f.push_back(pow(n,5));
        //cout << "f" << n << "=" << f[n] << endl;
        //正解があるか判定(n^5とそれまでのx^5で判定)
        for(int i=0;i<n;i++){
            //和
            //cout << "wa=" << f[n]+f[i] << endl;
            if(f[n]+f[i]==x){
                cout << n << " " << i*(-1) << endl;
                return 0;
            }
            //差
            if(f[n]-f[i]==x){
                cout << n << " " << i << endl;
                return 0;
            }
        }
        //なければ次のnで検索
        n++;
    }
    return 0;
}
