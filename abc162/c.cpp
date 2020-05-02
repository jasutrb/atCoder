#include <bits/stdc++.h>
#define rep(i,n) for (int i = 1; i <=n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


using namespace std;

int gcd3(int a, int b, int c){
    int d;
    d = gcd(a,b);
    return(gcd(d,c));
}

int gcd(int a, int b){
   if (a%b == 0){
       return(b);
   }else{
       return(gcd(b, a%b));
   }
}

int main(){
    int n;
    cin >> n;
    ll sum=0;
    //地道に3重ループ
    rep(i,n){
        rep(j,n){
            rep(k,n){
                sum += gcd3(i,j,k);
            }
        }
    }
    cout << sum << endl;
    return 0;

}




/*
int main()
{
   int a, b, c;
   cin >> a >> b >> c;
   cout << "最大公約数:" << gcd(a, b) << endl;
   cout << "最大公約数:" << gcd3(a, b, c) << endl;
   return 0;
}
*/
