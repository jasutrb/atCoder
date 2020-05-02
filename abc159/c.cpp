#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;



int main() {
     int L;
     cin >> L;
     double V;
     if(L%3==0){
        V = L*L*L/27;
        printf("%0.12f",V);
        return 0;
     }
     if(L%3==1){
        int n;
        n = L/3;
        V = pow(n,3)+pow(n,2)+((double)n/(double)3)+((double)1/(double)27);
        printf("%0.12f",V);
        return 0;
     }
    if(L%3==2){
        int n;
        n = L/3;
        V = pow(n,3)+pow(n,2)*2+((double)4*(double)n/(double)3)+((double)8/(double)27);
        printf("%0.12f",V);
     }


    return 0;
}
