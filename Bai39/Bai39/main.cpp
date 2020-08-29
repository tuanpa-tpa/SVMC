//
//  main.cpp
//  Bai39
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
const long long M = 1e9+7;
struct MaTran {
    long long M[3][3];
};

MaTran operator *(MaTran A , MaTran B){
    MaTran C;
    for (int i = 1; i<= 2; i++){
        for (int j = 1; j<= 2; j++){
            C.M[i][j] = 0;
            for (int k = 1; k <= 2; k++){
                C.M[i][j] = (C.M[i][j] + (A.M[i][k]*B.M[k][j])%M)%M;
            }
        }
    }
    return C;
}

MaTran power(MaTran A,int n){
    if ( n == 1) return A;
    MaTran x = power(A, n/2);
    if (n % 2 == 0) return x*x;
    else return A*x*x;
}


int main(int argc, const char * argv[]) {
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        MaTran A;
        A.M[1][1] = 0;A.M[1][2] = 1;
        A.M[2][1] = 1;A.M[2][2] = 1;
        MaTran k = power(A, n-1);
        cout << k.M[2][2] <<  endl;
    }
    return 0;
}
