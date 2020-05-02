#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

bool vector_finder(std::vector<int> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return true;
  }
  else { // 発見できなかったとき
    return false;
  }
}

int main() {
    //N人数 M友達 Kブロック
    int n,m,k;
    cin >> n >> m >> k;
    std::vector<P> pm(m);
    std::vector<P> pk(k);
    rep(i,m) cin >> pm[i].first >> pm[i].second;
    rep(i,k) cin >> pk[i].first >> pk[i].second;

    //順番に友達関係の数を調べる
    //片方の友達候補は他方の友達候補でもある

    //各人の友達番号をリスト化する
    //各人のプロック番号をリスト化する
    //１の友達番号はスルー。1の友達の友達をたどる（通過した番号はしかなければ停止）。それを友達候補リストに追加。最終的にブロックリストの番号を削除し集計。

    //(ヒント見た)グループ分けする
    //ペアの中にグループにいる人がいればそのグループに相方も入れ、いなければあたらしいグループを作る
    rep(i,m) printf("%d %d\n",pm[i].first,pm[i].second);

    vector<vector<int>> g(1);
    int gnum = 1;
    bool gflag=true;
    rep(i,m){
        if(i==0) {
            g[0].push_back(pm[0].first);
            g[0].push_back(pm[0].second);
        }
        //if(pm[i].first,pm[i].second)
        //cout << g[0]
        else{
            //新しい要素をグループに入れるか判定する
            rep(j,gnum){
                if(vector_finder(g[j],pm[i].first) || vector_finder(g[j],pm[i].second)){
                    g[j].push_back(pm[i].first);
                    g[j].push_back(pm[i].second);
                    //sortと無駄削除
                    sort(g[j].begin(),g[j].end());
                    g[j].erase(unique(g[j].begin(), g[j].end()), g[j].end());
                    gflag = false;
                }
            }
            //新しいグループを作る
            if(gflag){
                gnum += 1;
                g.resize(gnum);
                g[gnum-1].push_back(pm[i].first);
                g[gnum-1].push_back(pm[i].second);
            }

        }
    }
    printf("size %zu \n",g[0].size());
    rep(j,gnum){
        printf("gnum=%d \n",j);
        rep(i,g[j].size()) printf("g=%d \n",g[j][i]);
    }
return 0;
}
