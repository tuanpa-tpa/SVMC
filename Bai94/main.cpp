#include <iostream>
#include <algorithm>
using namespace std;
int n,A[105],d= 0;
void xuat(){
    d++;
    cout << "Buoc "<< d << ": ";
    for (int i = 0; i< n; i++) cout << A[i] << " ";
    cout << endl;
}

void selectionSort(){
    int minIndex;
    for (int i = 0; i< n-1; i++){
        minIndex = i;
        for (int j = i+1;j < n; j++){
            if (A[minIndex] > A[j]){
                minIndex = j;
            }
        }
        swap(A[minIndex],A[i]);
        xuat();
    }
}

int main(){
    cin >> n;
    for(int i = 0; i< n; i++) cin >> A[i];
    selectionSort();
    return 0;
}