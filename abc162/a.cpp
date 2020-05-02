#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    int a;
    cin >> n;
    while(n>0){
        a = n % 10;
        if(a==7){
            cout << "Yes" << endl;
            return 0;
        }
        n = n / 10;
    }
    cout << "No" << endl;
    return 0;
}
