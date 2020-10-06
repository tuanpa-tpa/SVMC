#include <iostream>
using namespace std;
int t,n,k,A[1005];

void xuat(){
    for (int i = 1; i<=k; i++) cout << A[i] << " ";
}

void toHop(){
    int i = k;
    while (A[i-1] == A[i]-1) i--;
    if (i >= 1){
        A[i]--;
        for (int j = i+1; j<=k ;j++)
            A[j] = n-k+j;
    }
}

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        bool kt = true;
        for (int i = 1; i<= k; i++) cin >> A[i];
        for (int i = 1; i<= k; i++) {
            if (A[i] != i){
                kt = false;
                break;
            }
        }
        if (kt){
            for (int i = 1; i<= k; i++) cout << n-k+i << " ";
        } else{
            toHop();
            xuat();
        }
        cout << endl;
    }
    return 0;
}