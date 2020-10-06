#include <iostream>
using namespace std;
int t,n,k,A[25];
void xuat(){
    for (int i = 1; i<= k; i++) cout << A[i];
    cout << " ";
}
void backtrack(int i){
    for (int j = A[i-1]+1; j<= n-k+i; j++){
        A[i] = j;
        if (i == k) xuat();
        else backtrack(i+1);
    }
}

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        A[0] = 0;
        backtrack(1);
        cout << endl;
    }
    return 0;
}