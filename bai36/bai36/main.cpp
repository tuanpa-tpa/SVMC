//
//  main.cpp
//  bai36
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int t,n,k;
long long m = 1e9+7;

long long mu(int n, int k){
    if (k == 0) return 1;
    long long x = mu(n, k/2);
    if (k % 2 == 0) return x*x%m;
    else return n*(x*x%m)%m;
}

int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--) {
         cin >> n >> k;
        cout << mu(n, k) << endl;
    }
    return 0;
}
