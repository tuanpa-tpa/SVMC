#include <iostream>
using namespace std;
int main(){
    int t,m,n,A[105][105],B[105][105];
    cin >> t;
    while(t--){
        cin >> m >> n;
        for (int i = 1; i<=m; i++){
            for (int j = 1; j<=n ;j++){
                cin >> A[i][j];
            }
        }
        B[1][1] = 1;
        for (int i = 1; i<=m; i++){
            for (int j = 1; j<=n ;j++){
                if (i == 1 && j == 1) continue;
                B[i][j] = B[i-1][j]+B[i][j-1];
            }
        }
        cout << B[m][n]<<endl;
    }
    return 0;
}