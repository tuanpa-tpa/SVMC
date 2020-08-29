//
//  main.cpp
//  Bai31
//
//  Created by PAT on 8/24/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int t,n,m,A[200][200];
long long d;
void input(){
    d = 0;
    cin >> m >> n;
    for (int i = 1; i<= m; i++){
        for (int j = 1 ; j<= n; j++)
            cin >> A[i][j];
    }
}
void backtrack(int i, int j){
    if (i == m && j == n) {
        d++;
        return;
    }
    if (i < m && A[i+1][j] ) backtrack(i+1,j);
    if (j < n && A[i][j+1] ) backtrack(i,j+1);
}

int kq[200][200];
int main() {
    cin >> t;
    while (t--) {
        input();
        kq[1][1] = 1;
//        backtrack(1,1);
        for (int i = 1; i<= m; i++){
            for (int j = 1; j<= n; j++){
                if (i == 1 && j == 1) continue;
                kq[i][j] = kq[i-1][j]+kq[i][j-1];
            }
        }
        cout << kq[m][n] << endl;
    }
    return 0;
}
//1    1    1
//1    2    3
//
//
//1    1    1
//1    2    3
//1    3    6
