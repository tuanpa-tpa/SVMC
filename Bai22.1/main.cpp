#include <iostream>
using namespace std;
int t,n,k,A[1005];

void toHop(){
    int i = k;
    while(A[i] == n-k+i) i--;
    if (i>=1){
        A[i]++;
        for (int j = i+1; j<=k;j++)
            A[j]= A[j-1]+1;
    }
}

void xuat(){
    for (int i = 1; i<= k; i++) cout << A[i] << " ";
}

int main(){
    cin >> t;
    while(t--){
        bool check = false;
        cin >> n >> k;
        for (int i = 1; i<= k; i++) cin >> A[i];
        for (int i = 1; i<= k; i++){
            if (A[i] != n-k+i){
                check = true;
            }
        }
        if (!check){
            for (int i = 1; i<= k; i++) cout << i << " ";
        } else {
            toHop();
            xuat();
        }
        cout << endl;
    }

    return 0;
}