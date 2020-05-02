#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


int main() {
    int k;
    cin >> k;
    //vectorで管理して桁ごとに進めていく
    //forで書けvector<int> v={1,2,3,4,5,6,7,8,9};
    vector<ll> v;
    for(int i=1;i<=9;i++) v.push_back(i);
    if(k<=9){
        cout << k << endl;
        return 0;
    }
    //int cnt = 9;
    //一周でひとけた増える
    while(1){
        //終了条件(kはその桁の中で何番目かに変換されている)
        if(k <= v.size()){
            cout << v[k-1] << endl;
            return 0;
        }
        k -= v.size();
        //１の位を新たに追加
        vector<ll> old;
        swap(v,old);
        for(ll x : old){
            for(int i=-1;i<=1;i++){
                ll d = x % 10+i; //追記したい数の１の位
                if(d<0 || d>9) continue; //範囲外
                ll dx = 10*x + d; //追記したい数
                v.push_back(dx);
            }
        }
    }
    return 0;
}
