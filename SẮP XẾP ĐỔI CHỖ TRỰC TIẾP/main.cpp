#include <iostream>
#include <algorithm>
using namespace std;
void xuat(int A[],int n,int d){
    cout << "Buoc "<< d <<": ";
    for (int i =0 ;i < n; i++) cout << A[i] << " ";
    cout << endl;
}
int main(){
    int n,A[105];
    int d = 1;
    cin >> n;
    for (int i = 0; i< n; i++) cin >> A[i];
    for (int i = 0; i< n-1; i++){
        for (int j = i+1; j< n; j++){
            if (A[i] > A[j]) swap(A[i],A[j]);
        }
        xuat(A,n,d);
        d++;
    }
    return 0;
}