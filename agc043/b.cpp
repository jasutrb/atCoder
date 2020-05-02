#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int nextV(vector<int> &v){
    //終端処理 要素数１なら出力
    if(v.size()==1){
        cout << v[0] << endl;
        return 0;
    }
    //順に差を取り絶対値を取った値を新たな配列に格納
    vector<int> v2(v.size()-1);
    rep(i,v.size()-1){
        v2[i] = abs(v[i] - v[i+1]);
    }
    nextV(v2);
    return 0;
}

int ctoi(char c) {
	switch (c) {
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
	}
	return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    string ain;
    cin >> ain;
    rep(i,n){//文字数字変換
        v[i] = ctoi(ain[i]);
    }
    nextV(v);
    return 0;
}
