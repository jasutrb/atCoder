#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a,b;
    cin >> a >> b;
    if(a > b){
        cout << "-1" << endl;
        return 0;
    }

    //cout << "あ" << endl;
    int x,y;
    //xは切り捨ててる可能性がある
    x = (a+1) * 100 / 8;
    //yが考えうる最小の元値の可能性
    y = b * 100 / 10;

    int ansA,ansB;
    for(int i=y ; i<=x ; i++){
        ansA = i * 8 / 100;
        ansB = i / 10;
        //cout << "i=" << i << " ansA=" << ansA << " ansB=" << ansB << "\n" << endl;
        if(ansA==a && ansB==b){
            cout << i << endl;
            return 0;
        }
    }

    //cout << "い" << endl;
    cout << "-1" << endl;
    return 0;
}
