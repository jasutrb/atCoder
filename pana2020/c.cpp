#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll a,b,c;
    cin >> a >> b >> c;
    if(a+b-c > 0){
        cout << "No" <<endl;
        return 0;
    }

    if((a+b-c)*(a+b-c) > 4*a*b){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
    //cout << sqrt(a) << "\n" << sqrt(b)<< "\n" << sqrt(c) <<endl;
    //printf("%0.8lf",sqrt(a));
return 0;
}
