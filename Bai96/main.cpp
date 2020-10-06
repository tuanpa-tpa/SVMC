#include <iostream>
#include <algorithm>
using namespace std;
int d = 0;
void xuat(int A[],int n){
    d++;
    cout << "Buoc "<< d << ": ";
    for (int i = 0; i< n; i++) cout << A[i] << " ";
    cout << endl;
}

void bubbleSort(int A[],int n){
    int kt = false;
    for (int i = 0; i< n; i++){
        kt = false;
        for (int j = 0; j< n-i-1; j++){
            if (A[j] > A[j+1]){
                swap(A[j],A[j+1]);
                kt = true;
            }
        }
        if (!kt) break;
        xuat(A,n);
    }
}


int main(){
    int n,A[105];
    cin >> n;
    for (int i = 0; i< n; i++) cin >> A[i];
    bubbleSort(A,n);
    return 0;
}

// Buoc 1: 3 2 5 7
// Buoc 2: 2 3 5 7
// Buoc 1:3 2 5 7 
// Buoc 2:2 3 5 7 