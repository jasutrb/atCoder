#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    //和が偶数。奇数＋奇数と偶数と偶数
    int n,m;
    cin >> n >> m;
    //nC2+mC2
    int ansN,ansM;
    ansN = n*(n-1)/2;
    ansM = m*(m-1)/2;
    cout << ansN + ansM << endl;
return 0;
}
