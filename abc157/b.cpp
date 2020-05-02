#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    //i縦j横
    int bingo[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> bingo[i][j];
        }
    }

    int N,a;
    cin >> N;
    for(int k=0;k<N;k++){
        cin >> a;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(bingo[i][j] == a){
                    bingo[i][j] = 0;
                }
            }
        }
    }

    //条件確認
    //横
    if(bingo[0][0]+bingo[0][1]+bingo[0][2]==0){
        printf("Yes");
        return 0;
    }
    if(bingo[1][0]+bingo[1][1]+bingo[1][2]==0){
        printf("Yes");
        return 0;
    }
    if(bingo[2][0]+bingo[2][1]+bingo[2][2]==0){
        printf("Yes");
        return 0;
    }
    //縦
    if(bingo[0][0]+bingo[1][0]+bingo[2][0]==0){
        printf("Yes");
        return 0;
    }
    if(bingo[0][1]+bingo[1][1]+bingo[2][1]==0){
        printf("Yes");
        return 0;
    }
    if(bingo[0][2]+bingo[1][2]+bingo[2][2]==0){
        printf("Yes");
        return 0;
    }
    //ななめ
    if(bingo[0][0]+bingo[1][1]+bingo[2][2]==0){
        printf("Yes");
        return 0;
    }
    if(bingo[0][2]+bingo[1][1]+bingo[2][0]==0){
        printf("Yes");
        return 0;
    }

    printf("No");
    return 0;

}
