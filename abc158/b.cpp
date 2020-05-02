#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n,a,b,ab;
    cin >> n >> a >> b;
    ab = a + b;

    ll set,amari;
    set = n / ab;
    amari = n % ab;

    if(amari > a){
        cout << set*a+a << endl;
    }
    else{
        cout << set*a+amari << endl;
    }


    return 0;
}
