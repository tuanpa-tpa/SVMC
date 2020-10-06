#include <iostream>
using namespace std;
int t,n,k,A[25];
bool ok = true;
void xuat(){
    for (int i = 1; i<= k; i++) cout << A[i];
    cout << " ";
}
void toHop(){
    int i = k;
    while(A[i] == n-k+i) i--;
    if (i >= 1){
        A[i]++;
        for (int j = i+1; j<=k; j++)
            A[j] = A[j-1]+1;
    } else ok = false;
}
int main(){
    cin >> t;
    while(t--){
        ok = true;
        cin >> n >> k;
        for (int i = 1; i<= k; i++) {
            A[i] = i;
        }
        while(ok){
            xuat();
            toHop();
        }
        cout << endl;
    }
    return 0;
}