#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int combi2(int n){
    return (n*(n-1))/2;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n),v2(n);
    rep(i,n) cin >> v[i];

    //まずは全組み合わせ.Wは数字の種類
    set<int> s(v.begin(),v.end());
    vector<int> w(s.begin(),s.end());

    //個数チェック
    map<int,P> x;
    int cnt = 0,key;
    rep(i,w.size()){
        cnt =  count(v.begin(),v.end(),w[i]);
        x[w[i]].first = cnt;
        x[w[i]].second = combi2(cnt);
    }

    //すべてのセット
    int allset=0,num;
    rep(i,x.size()){
        key = w[i];
        num = x[key].first;
        allset += combi2(num);
    }

    //xごとのans
    rep(i,x.size()){
        key = w[i];
        num = x[key].first;
        x[key].second = allset - x[key].second + combi2(x[key].first-1);
    }

    //結果
    rep(i,v.size()){
        key = v[i];
        cout << x[key].second << endl;
    }
    return 0;
}
