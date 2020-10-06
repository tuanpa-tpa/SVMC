#include <iostream>
#include <cstring>
using namespace std;
int n,A[20][20],temp[20],MIN = 1e9,MMIN = 1e9,tong = 0;
bool check[20];
void backTracking(int i){
    if (tong + MMIN*(n-i+1) >= MIN) return;
    for (int j = 1; j<= n; j++){
        if (check[j]){
            check[j] = false;
            temp[i] = j;
            tong = tong + A[temp[i-1]][j];
            if (i == n){
                if (tong + A[temp[n]][temp[1]] < MIN)
                    MIN = tong + A[temp[n]][temp[1]];
            } else backTracking(i+1);
            tong = tong - A[temp[i-1]][j];
            check[j] = true;
        }
    }
}

int main(){
    cin >> n;
    for (int i = 1; i<= n; i++){
        for (int j = 1; j<= n; j++){
            cin >> A[i][j];
            if (A[i][j] != 0 && A[i][j] < MMIN) MMIN = A[i][j];
        }
    }
    memset(check,true,sizeof(check));
    check[1] = false;
    temp[1] = 1;
    backTracking(2);
    cout << MIN << endl;
    return 0;
}