#include <iostream>
using namespace std;
int main(){
    int t,n,A[105];
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0; i< n; i++) cin >> A[i];
        int E = 0,S = A[0];
        for (int i = 0; i< n; i++){
                if (E + A[i] >= 0) {
                    E = E+A[i]; 
                    if (E > S) S = E;
                } else E = 0;
        }
        cout << S << endl;
    }
    return 0;
}