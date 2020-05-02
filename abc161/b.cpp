#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n ,m;
    cin >> n >> m;
    vector<int> v(n);
    rep(i,n) cin >> v[i];


    int sum=0;
    rep(i,n) sum += v[i];
    //cout << " sum=" << sum;
    double base;
    base = (double)sum/4.0/(double)m;
    //cout << "base=" << base;
    int cnt=0;
    rep(i,n){
        if(v[i] >= base){
            cnt++;
        }
    }

    if(cnt >= m){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
