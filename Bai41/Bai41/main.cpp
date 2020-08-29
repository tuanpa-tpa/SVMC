//
//  main.cpp
//  Bai41
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int n,t,k;
const long long M = 1e9+7;
struct Matran{
    long long M[15][15];
};

Matran operator *(Matran A, Matran B){
    Matran C;
    for (int i = 1; i<= n; i++){
        for (int j = 1; j<=n; j++){
            C.M[i][j] = 0;
            for (int k = 1; k<= n; k++){
                C.M[i][j] = (C.M[i][j] + (A.M[i][k]*B.M[k][j])%M)%M;
            }
        }
    }
    return C;
}

Matran power(Matran A, int n){
    if ( n == 1) return A;
    Matran x = power(A,n/2);
    if (n%2 == 0) return x*x;
    else return A*x*x;
}


int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--) {
        cin>> n >> k;
        Matran A;
        for (int i = 1; i<= n; i++){
            for (int j = 1; j<= n; j++)
                cin >> A.M[i][j];
        }
        Matran kq = power(A,k);
        for (int i = 1; i<= n; i++){
            for (int j = 1; j<= n; j++)
                cout << kq.M[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}

//8 5
//5 3
//597240088 35500972 473761863
//781257150 154135232 527013321
//965274212 272769492 580264779
//8 5
//5 3
//597240088 35500972 473761863
//781257150 154135232 527013321
//965274212 272769492 580264779
//
