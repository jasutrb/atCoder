#include <iostream>
using namespace std;
#include <math.h>
#include <algorithm>
#include <iostream>

int main(void){
    int N=0 ,K=0 ,i=0,j=0;
    scanf("%d %d",&N ,&K);
    double *c;        /* 割り振られた領域のアドレスを格納するためのint型のポインタipを宣言 */
        c = (double *)malloc(N * sizeof(double));  /* メモリ領域の確保 */
    for(i=0;i<N;i++){
        scanf("%lf",&c[i]);
    }

    if(N<K){
        printf("0");
        return(0);
    }

    //昇順、上からK個数を０に。残りを足す
    //選択ソート式に行う
    double max=0;
    int num = 0;
    for(j=0;j<K;j++){
        max = 0;
        num = 0;
        for(i=0;i<N;i++){
           if(c[i] > max){
                max = c[i];
                num = i;
           }
        }
        c[num] = 0;
    }
    /*
    for(i=0;i<N;i++){
        printf("%0.f ",c[i]);
    }
    printf("\n");
    */
    double total = 0;
    for(i=0;i<N;i++){
        total = total + c[i];
    }
    printf("%0.f ",total);
    free(c);
}
