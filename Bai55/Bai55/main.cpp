//
//  main.cpp
//  Bai55
//
//  Created by PAT on 8/26/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t,n,A[1010],d;
    cin >> t;
    while (t--) {
        d = 0 ;
        cin >> n;
        for (int i = 0; i< n; i++) cin >> A[i];
        sort(A,A+n);
        for (int i = 1; i< n; i++){
            if (A[i] - A[i-1] == 0) continue;
            d += A[i] - A[i-1] -1;
//            cout << A[i] << " ";
        }
        cout << d << endl;
    }
    return 0;
}
