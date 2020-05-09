#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n,k,d;
    cin >> n >> k;
    vector<int> v;
    for(int i=1;i<=n;i++) v.push_back(i);
    rep(i,k){
        cin >> d;
        int a;
        rep(j,d){
            cin >> a;
            auto itr = find(v.begin(),v.end(),a);
            if(itr!=v.end()){
                v.erase(itr);
            }
        }
    }
    cout << v.size() << endl;
    return 0;
}
