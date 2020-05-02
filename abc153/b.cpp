#include <iostream>
using namespace std;
#include <math.h>

int main(void){
    int H=0 ,N=0 , i=0;
    scanf("%d %d",&H ,&N);
    //cin >> H,A;
    int *c;        /* 割り振られた領域のアドレスを格納するためのint型のポインタipを宣言 */
        c = (int *)malloc(N * sizeof(int));  /* メモリ領域の確保 */
    for(i=0;i<N;i++){
        scanf("%d",&c[i]);
    }

    //技の和
    int total = 0;
    for(i=0;i<N;i++){
        total += c[i];
    }

    if(total >= H){
        printf("Yes");
    }
    else{
        printf("No");
    }

    free(c);
}
