#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int Th,Ta,Ah,Aa;
    cin >> Th >> Ta >> Ah >> Aa;
    int Td,Ad;
    Td = ceil((double)Th / (double)Aa);
    Ad = ceil((double)Ah / (double)Ta);
    //cout << Td  << " " << Ad << endl;
    if(Td>=Ad){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
