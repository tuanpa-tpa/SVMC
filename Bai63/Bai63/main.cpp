//
//  main.cpp
//  Bai63
//
//  Created by PAT on 8/27/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
long long A[1005][1005];
const long long M = 1e9+7;
void xuLy(){
    for (int i = 0; i<= 1000; i++){
        for (int j = 0; j<= i; j++){
            if (i == j || j == 0) A[i][j] = 1;
            else A[i][j] = A[i-1][j-1]+A[i-1][j];
            A[i][j]%=M;
        }
    }
}

int main(int argc, const char * argv[]) {
    xuLy();
    int t,n,k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << A[n][k] << endl;
    }
    
    return 0;
}
