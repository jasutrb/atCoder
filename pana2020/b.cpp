#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll h,w;
    cin >> h >> w;
    if(h==1 || w==1){
        cout << 1 << endl;
        return 0;
    }
    if(h%2==0 && w%2==0){
        cout << (h*w)/2 << endl;
        return 0;
    }else{
        cout << (h*w+1)/2 << endl;
        return 0;
    }
    return 0;
}
