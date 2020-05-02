#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

bool kaibun(string s1){
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    //cout << s2 << endl;
    if(s1==s2) return true;
    return false;
}

int main() {
    string s;
    cin >> s;
    bool ok1,ok2,ok3;
    int n;
    n = s.size();
    //回文チェック
    ok1 = kaibun(s);
    //if(ok1) cout << "yes1" << endl;

    //前半回文チェック
    string s2=s;
    s2.erase(s2.begin()+(n-1)/2,s2.end());
    ok2 = kaibun(s2);
    //if(ok2) cout << "yes2" << endl;

    //後半回文チェック
    string s3=s;
    s3.erase(s3.begin(),s3.end()-(n-1)/2);
    ok3 = kaibun(s3);
    //if(ok3) cout << "yes3" << endl;

    if(ok1 && ok2 && ok3) {
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
        return 0;
    }
    return 0;
}
