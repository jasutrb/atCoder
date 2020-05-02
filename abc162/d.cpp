#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
/*
bool cnt(int a,int b, int c){
    int i,j,k;
    i = min(a,b);
    i = min(i,c);
    k = max(a,b);
    k = max(k,c);
    j = a+b+c-i-k;
    if((j-i)!=(k-j)){
        return true;
    }else{
        return false;
    }
}
*/
bool cnt(int a,int b, int c){
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    if((b-a)!=(c-b)){
        return true;
    }else{
        return false;
    }
}

int main() {
    int ans = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> r,g,b;
    //各文字の場所を記録
    int i = 0;
    while(i < n){
        if(s[i]=='R'){
            r.push_back(i);
        }else if(s[i]=='G'){
            g.push_back(i);
        } else if(s[i]=='B'){
            b.push_back(i);
        }
        i++;
    }

    int rz=r.size(),gz=g.size(),bz=b.size(); // rの要素数

    for(int i=0 ; i < rz; i++){     //rを順番に見る
        for(int j=0; j < gz ; j++){ //gを順番に見る
            for(int k=0; k < bz ; k++){     //bを順番に見る
                if(cnt(r[i],g[j],b[k])){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
