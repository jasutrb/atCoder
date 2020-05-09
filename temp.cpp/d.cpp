//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
//using P = pair<int,int>;

int main() {
  string s;
  cin >> s;
  vector<ll> v;
  //vはsの数字化,配列の番地は桁番号とする
  for(int i=s.size()-1;i>=0;i--){
    v.push_back(s[i]-'0');
  }
  rep(i,v.size()){
    cout << v[i] << " ";
  }cout << endl;

  vector<ll> vsum;
  vsum.push_back(v[0]);
  for(int i=1;i<v.size();i++){
    vsum.push_back(vsum[i-1]+v[i]*pow(10,i));
  }
  rep(i,vsum.size()){
    cout << vsum[i] << " ";
  }cout << endl;

  vector<int> vmod;
  rep(i,vsum.size()){
    vmod.push_back(vsum[i]%2019);
  }
  rep(i,vmod.size()){
    cout << vmod[i] << " ";
  }cout << endl;

  //modが同じ物のペア数をカウントする
  vector<int> vnum(2019);
  rep(i,vmod.size()){
    vnum[vmod[i]]++;
  }
  rep(i,vnum.size()){
    if(vnum[i]!=0) cout << vnum[i] << " ";
  }cout << endl;

  int cnt=0,num;
  rep(i,vnum.size()){
    num = vnum[i];
    if(num>1){
      cnt += num*(num-1)/2;
    }
  }
  cout << cnt << endl;
  return 0;
}
