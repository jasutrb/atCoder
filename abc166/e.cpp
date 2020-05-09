#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> h(n+1);
    for(int i=1; i<=n ;i++) cin >> h[i];
    int cnt = 0;
    //地道に
    for(int i=1; i<n+1 ;i++){
        int num = 0; //毎回差が1ずつ増える
        for(int j = i+1 ; j<n+1;j++){
            //cout << "i=" << i << " j=" << j << endl;
            //int num = abs(j-i);  //自明にj>i
            num++;
            int totH = h[j] + h[i];
            if(num == totH) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
