#include <iostream>
#include <cstring>
using namespace std;
int t,n,s; bool check = false;
int A[35],B[35];

void sinh(int k){
    int i = k;
    while (i>= 1 && B[i] == n-k+i) i--;
    if (i >= 1){
        B[i]++;
        for (int j = i+1; j<=k; j++)
            B[j] = B[j-1]+1;
    }
}
int main(){
    cin >>t ;
    while(t--){
        cin >> n >> s;
        for (int i = 1; i<= n; i++ ) cin >> A[i];
        memset(B,0,sizeof(B));
        for (int i = 1; i<= n; i++){
            bool kt = false;
            check = false;
            for (int j = 1; j<= i; j++)
                B[j] = j;
            while(!check){
                int tong = 0;
                for (int j = 1; j<= i; j++)
                    tong += A[B[j]];
                if (tong == s){
                    cout << i;
                    kt = true;
                    break;
                }
                sinh(i);
            }
            if (kt) break;
        }
        cout << endl;
    }
    return 0;
}