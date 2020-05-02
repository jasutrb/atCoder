#include <iostream>
using namespace std;
int main(void){
int H=0 ,A=0;
scanf("%d %d",&H ,&A);
//cin >> H,A;
int amari = 0;
double a;
a = H % A;
if(H%A != 0){
    amari = 1;
}
//printf("%d,%d\n", H,A);
printf("%d\n", H/A+amari);
}
