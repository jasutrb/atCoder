#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n,m; //n:numOfCard,m:numOfOperation
    cin >> n >> m;
    int a;
    priority_queue< int, std::vector<int>, std::greater<int> > pque;
    rep(i,n) {
        cin >> a;
        pque.push(a);
    }
    int b,c;
    rep(i,m){
        cin >> b >> c;
        rep(j,b){
            //最小がcを超えるまで書き換える
            if(pque.top() < c){
                pque.pop();
                pque.push(c);
            }else{
                break;
            }
        }
    }

    ll ans=0;

    rep(i,n){
        ans += pque.top();
        //cout << "i" << i  << " que"<<  pque.top() << endl;
        pque.pop();
    }
    cout << ans << endl;
return 0;
}
