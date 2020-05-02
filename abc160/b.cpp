#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int x;
    cin >> x;
    int l,s;
    l = x / 500;
    s = (x - l*500)/5;
    cout << l*1000 + s*5 << endl;
    return 0;
}
