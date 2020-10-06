#include <iostream>
using namespace std;
const long long M = 1e9+7;

long long luyThua(int n, int k){
    if (k == 0) return 1;
    long long x = luyThua(n,k/2);
    if (k % 2 == 0) return x*x%M;
    else return n*(x*x%M)%M;
}

int main(){
    int n,k,t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << luyThua(n,k) << endl;  
    }
    return 0;
}