#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    int a;
    for(int i=0;i<n-1;i++){
        cin >> a;
        v[a]++;
    }
    for(int i=1;i<n+1;i++){
        cout << v[i] << endl;
    }
return 0;
}
