#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    set<string> gacha;
    string s;
    rep(i,n){
        cin >> s;
        gacha.insert(s);
    }
    cout << gacha.size() << endl;

return 0;
}
