#include <iostream>
#include <algorithm>
using namespace std;
int t,n,A[1005];

void hoanVi(){
    int i = n-1;
    while(A[i] > A[i+1]) i--;
    if (i >= 1){
        int j = n;
        while (A[i] > A[j]) j--;
        swap(A[i],A[j]);
        int d = i+1,c = n;
        while (d < c){
            swap(A[d],A[c]);
            d++;c--;
        } 
    }
}
void xuat(){
    for (int i = 1; i<= n; i++) cout << A[i] << " ";
}

int main(){
    cin >> t;
    while(t--){
        bool check = false;
        cin >> n;
        for (int i = 1; i<= n; i++) cin >> A[i];
        for (int i = 1; i<= n; i++){
            if (A[i] != n-i+1){
                check = true;
                break;
            }
        }
        if (!check){
            for (int i = 1; i<= n; i++) cout << i << " ";
        } else {
            hoanVi();
            xuat();
        }
        cout << endl;
    }
    return 0;
}