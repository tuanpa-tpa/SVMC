#include <iostream>
using namespace std;
struct Matran{
    long long M[15][15];
};
int t,n,k;
const long long M = 1e9+7;
Matran operator *(Matran A, Matran B){
    Matran C;
    for (int i = 1; i<= n; i++){
        for (int j = 1; j<=n ; j++){
            C.M[i][j] = 0;
            for (int k = 1; k<=n ; k++){
                C.M[i][j] = (C.M[i][j] + (A.M[i][k]*B.M[k][j])%M)%M;
            }
        }
    }
    return C;
}

Matran luyThua(Matran A, int k){
    if (k == 1) return A;
    Matran B = luyThua(A,k/2);
    if (k % 2 == 0) return B*B;
    else return A*B*B;
}

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        Matran A;
        for (int i  = 1; i<= n; i++){
            for (int j = 1; j<=n ;j++){
                cin >> A.M[i][j];
            }
        }
        Matran kq = luyThua(A,k);
        for (int i  = 1; i<= n; i++){
            for (int j = 1; j<=n ;j++){
                cout << kq.M[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}