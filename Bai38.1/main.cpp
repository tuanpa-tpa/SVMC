#include <iostream>
using namespace std;
long long A[100] = {0};
void sinhFibonacci(){
    A[1] = 1;
    A[2] = 1;
    for (int i = 3; i<= 92; i++){
        A[i] = A[i-1]+A[i-2];
    }
}
char chiaVaTri(int n,long long k){
    if (n == 1 ) return 'A';
    if (n == 2 ) return 'B';
    if (k <= A[n-2]) return chiaVaTri(n-2,k);
    else return chiaVaTri(n-1,k-A[n-2]);
}

int main(){
    int t,n;
    long long k;
    sinhFibonacci();
    // for (int i = 1; i<= 20; i++) cout << A[i] << endl;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << chiaVaTri(n,k) << endl;
    }
    return 0;
}