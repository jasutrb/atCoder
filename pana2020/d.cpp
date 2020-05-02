#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int n;
void dfs(string s,char mx){
    //文字列を作るmxは使用可能な文字の種類
    //文字数nになったら終わり（終端条件）
    if(s.size()==n){
        cout << s << endl;
        return;
    }

    //分岐cは文字種類
    for(char c = 'a'; c <= mx ;c++){
        string t = s;
        t += c;
        //次に渡す使用可能文字が更新されてるならcだし、されてないならmxが渡される。
        dfs(t,max(c,mx));
    }


}

int main() {
    cin >> n;
    dfs("",'a'-1);
    return 0;
}
