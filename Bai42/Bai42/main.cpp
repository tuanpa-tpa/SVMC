//
//  main.cpp
//  Bai42
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
const long long M = 1e9+7;
long long n,r;
int t;

long long dao(long long n){
    long long temp = n,m =0;
    while (temp > 0) {
        m = m*10 + temp%10;
        temp/=10;
    }
    return m;
}

long long mu(long long m, long long n){
    if (n == 1) return m%M;
    long long a = mu(m,n/2);
    if (n%2 == 0) return a*a%M;
    else return m*(a*a%M)%M;
}


int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--) {
        cin >> n;
        r = dao(n);
//        cout << r <<" " << n <<endl;
        cout << mu(n,r) << endl;
    }
    return 0;
}

