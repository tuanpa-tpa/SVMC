#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,n,A[25];
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> A[i];
        sort(A,A+n);
        long long so1 = 0, so2 = 0;
        for (int i = 0 ; i< n; i++) {
            if (i % 2 == 0)
            so1 = so1*10 + A[i];
            else so2 = so2*10 + A[i];
        }
        long long so = so1+so2;
        cout << so;
        cout << endl;
    }
    return 0;
}