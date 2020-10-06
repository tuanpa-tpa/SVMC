#include <iostream>
using namespace std;
const long long M = 1e9+7;
long long daoSo(long long n){
    long long temp = 0;
    while( n > 0){
        temp = temp*10 + n%10;
        n/=10;
    }
    return temp;
}

long long luyThua(long long n, long long r){
    if ( r == 0) return 1;
    long long temp = luyThua(n,r/2);
    if (r % 2 == 0) return temp*temp%M;
    else return n*(temp*temp%M)%M;
}

int main(){
    int t;long long n;
    cin >> t;
    while(t--){
        cin >> n;
        long long r = daoSo(n);
        cout << luyThua(n,r) << endl;
    }
    return 0;   
}