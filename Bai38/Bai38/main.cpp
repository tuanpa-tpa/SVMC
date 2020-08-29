//
//  main.cpp
//  Bai38
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
long long A[100] ={0};
int t,n;
long long k;
void fibonacci(){
    A[1] = 1; A[2] = 1;
    for (int i = 3; i<= 92; i++) A[i] = A[i-1]+A[i-2];
}

void devideAndConquer(){
    while (n > 2){
        if ( k <= A[n-2]){
            n -= 2;
        } else {
            k -= A[n-2];
            n -= 1;
        }
//        cout << n << " " << k << endl;
    }
    if (n == 1) cout << "A";
    else cout << "B";
}

int main(int argc, const char * argv[]) {
    fibonacci();
    cin >> t;
    while (t--) {
        cin >> n >> k;
//        cout << A[n];
        devideAndConquer();
        cout << endl;
    }
    return 0;
}
