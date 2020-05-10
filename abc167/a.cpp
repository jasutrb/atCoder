#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    if(s2[s2.size()-1]!=' '){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
