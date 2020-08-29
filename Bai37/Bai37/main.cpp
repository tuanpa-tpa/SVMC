//
//  main.cpp
//  Bai37
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int devideAndConquer(int n, long long k){
    long long m = pow(2,n-1);
    if (m == k) return n;
    if (k < m) return devideAndConquer(n-1, k);
        else return devideAndConquer(n-1, k-m);
}


int main(int argc, const char * argv[]) {
    int t,n;
    long long k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        cout << devideAndConquer(n,k) << endl;
    }
    return 0;
}
