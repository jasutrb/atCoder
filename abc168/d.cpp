#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


const int INF = 1001001001;
vector<int> v[100005]; //?

int main() {
    int n,m;
    cin >> n >> m;
    //各番号に繋がる要素を集計して辿れるかを探る
    //vector<int> v[100100100];
    int a,b;
    rep(i,m){
        cin >> a >> b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }


    //0を起点に伸ばしていくbfs
    queue<int> q;


    vector<int> dist(n,INF);
    vector<int> pre(n,-1);
    dist[0] = 0;
    q.push(0);

    while(!q.empty()){
        int me = q.front(); q.pop();
        for(int to : v[me]){
            if(dist[to]!=INF) continue;
            dist[to] = dist[me] + 1;
            pre[to] = me;
            q.push(to);
        }
    }

    cout << "Yes" << endl;
    for(int i=1;i<n;i++){
        int ans = pre[i];
        cout << ans+1 << endl;
    }




    /*
    vector<P> v(m+1); //first:親ノード、second:1までの経路数
    for(int i=1;i<=m;i++){
        v[i].first = 0;
        v[i].second = 99999999;
    }
    int a,b;
    rep(i,n){
        cin >> a >> b;
        //更新チェック
        if(v[a].first!=1 && v[a].first!=0){
            int node = v[a].first;
            int leng = v[a].second;

        }
    }


    rep(i,n){
        cin >> v[i].first;
        cin >> v[i].second;
    }
    rep(i,n){
        cout << v[i].first << " ";
        cout << v[i].second << endl;
    }
    */
return 0;
}
