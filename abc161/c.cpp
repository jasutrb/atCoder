#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n ,k;
    cin >> n >> k;
    //cout << "n=" << n << " k=" << k << endl;
    ll min = 0;
    //ll sa=0;
    ll x = n/k;     //n<kのときは？->0だからok
    min = n - x*k; //正の範囲で最小
    ll min2;
    min2 = abs(min - k);
    if(min <= min2){
        cout << min << endl;
    }else{
        cout <<  min2 << endl;
    }

    /*
    while(1){
        sa = abs(min-k);
        //cout << "sa=" << sa << endl;
        if(sa < min){
            min = sa;
        }else{
            break;
        }
    }
    */
    return 0;
}
