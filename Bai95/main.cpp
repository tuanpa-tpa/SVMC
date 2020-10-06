#include <iostream>
using namespace std;
int n,A[105],d = 0;

void insertionSort(){
    int key,j;
    for (int i = 1; i < n; i++){
        key = A[i];
        j = i-1;
        while(j>=0 && key < A[j]){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
        d++; cout << "Buoc "<< d << ": ";
        for (int k = 0; k <= d; k++){
            cout << A[k] << " ";
        }
        cout << endl;
    }
}


int main(){
    cin >> n;
    for (int i = 0; i< n; i++) cin >> A[i];
    cout << "Buoc "<< d << ": " << A[0] <<  endl;
    insertionSort();
    return 0;
}