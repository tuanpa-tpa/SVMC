#include <iostream>
using namespace std;
int n,k,s,A[25],d;

void check(){
    int temp =0;
    for (int i = 1; i<=k ;i++){
        temp += A[i];
    }
    if (temp == s) d++;
}

void backtrack(int i){
    for (int j = A[i-1]+1; j<= n-k+i;j++){
        A[i] = j;
        if (i == k) check();
        else backtrack(i+1);
    }
}

int main(){
    while(true){
        cin >> n >> k >> s;
        if (n < k) {
            cout << "0" << endl;
            continue;
        }
        if (n == 0 && k == 0 && s == 0) break;
        d = 0;
        for (int i = 1; i<= k; i++) A[i] = i;
        backtrack(1);
        cout << d << endl;
    }
    return 0;
}
// 1
// 2
// 0
// 20
// 1542
// 5448
// 1
// 0
// 0
// 1
// 2
// 0
// 20
// 1542
// 5448
// 1
// 0
// 0