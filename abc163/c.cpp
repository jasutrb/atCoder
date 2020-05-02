#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n,m; //n:ID,m:gate
    cin >> n >> m;
    P gate;
    P range; //first:min,last:max;
    range.first = 1; range.second = n;
    //cout << "range " << range.first << " " << range.second << endl;
    rep(i,m){
        cin >> gate.first >> gate.second;
        //cout << "gate " << gate.first << " " << gate.second << endl;
        if(range.first <= gate.first) range.first = gate.first;
        if(range.second >= gate.second) range.second = gate.second;
        if(range.second < range.first){
            cout << 0 << endl;
            return 0;
        }
        //cout << "range " << range.first << " " << range.second << endl;
    }


    int  ans = range.second - range.first + 1;
    cout << ans << endl;

return 0;
}
