#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a;
    cin >> a;
    int num;
    num = a % 10;
    if(num == 0 || num == 1 || num == 6 || num == 8){
        cout  << "pon";
    }else if(num == 3){
        cout  << "bon";
    }else{
        cout << "hon";
    }

    return 0;
}
