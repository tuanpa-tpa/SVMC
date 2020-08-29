#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int A[20],n;
long long MAX = 0;
string s;

bool check(long long n){
    for(long long i = 1 ; i*i*i <= n;i++){
        if(i*i*i == n) return true;
    }
    return false;
}

void backtrack(int i){
    for (int j = 0; j<= 1; j++){
        A[i] = j;
        if (i == n){
            long long so = 0;
            for (int k = 0; k< n; k++){
                if (A[k] == 1)
                    so =so*10 + s[k] -'0';
            }
            if (so > 0 && so > MAX && check(so)){
                MAX = so;
            }
        } else backtrack(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        n = s.size();
        MAX = 0;
        for (int i = 0; i< n; i++) A[i] = 0;
        backtrack(0);
        if (!MAX) cout << -1;
        else cout << MAX;
        cout << endl;
    }
    return 0;
}