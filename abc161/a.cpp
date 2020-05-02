#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a,b,c,x;
    cin >> a >> b >> c;
    x = a;
    a = b;
    b = x;

    x = a;
    a = c;
    c = x;

    cout << a << " " << b << " " << c << endl;

return 0;
}
