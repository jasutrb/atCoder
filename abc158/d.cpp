#include <bits/stdc++.h>
//#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    ll q;
    cin >> s >> q;

    int t, f;
    string c;
    bool rev = false;
    string s2;
    rep(i,q){
        cin >> t;
        if(t==1){
            //反転
            //rev = !rev;
            swap(s,s2);
        }
        if(t==2){
            cin >> f >> c;
            if(f==1){
                s2 += c;
            }
            if(f==2){
                //後方にc追加
                s += c;
            }
        }
    }
    reverse(s2.begin(),s2.end());
    cout << s2 << s;
    return 0;
}
