#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int mini = 9999999;
int n,m,x;
vector<vector<int>> v(1,vector<int> (1));

bool check_x(vector<int> v,int x){
    for(int i=1;i<v.size();i++){
        if(v[i]<x) return false;
    }
    return true;
}

//全購入パターンを作る
//現在の参照番号num,現在のスキル合計配列v,
bool judge(int num,vector<int> sum){
    //終了チェック
    if(num==n){
        //条件チェック
        if(check_x(sum,x)){
            //最小更新
            if(sum[0] < mini){
                mini = sum[0];
            }
        }
        return false;
    }

    //i番目を追加しない
    if(judge(num+1,sum)) return true;

    //i番目を追加する
    rep(j,m+1)  sum[j] += v[num][j];
    if(judge(num+1,sum)) return true;

    //終了
    return false;
}


int main() {
    cin >> n >> m >> x;
    //総当たりで調べる(max2^12)
    //vector<vector<int>> v(m+1,vector<int> (n));v[n][m+1]
    v.resize(n);
    for(size_t i=0; i<n; i++){
      v[i].resize(m+1);
    }
    rep(i,n){
        rep(j,m+1){
            cin >> v[i][j];
        }
    }

    //総和
    vector<int> tot(m+1);
    rep(i,n){
        rep(j,m+1){
            tot[j] += v[i][j];
        }
    }
    if(!check_x(tot,x)){
        cout << "-1" << endl;
        return 0;
    }

    //最小探索
    vector<int> sum(m+1);
    if(judge(0,sum)){
        cout << "gg";
    }
    cout << mini << endl;
    return 0;
}
