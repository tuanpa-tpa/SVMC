//
//  main.cpp
//  Bai59
//
//  Created by PAT on 8/27/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,A[1005],B[1005] = {0};
    int kq = 1;
    cin >> n;
    for (int i = 1; i<=n; i++) cin >> A[i];
    for (int i = 1; i<=n; i++){
        B[i] = 0;
        for (int  j = 0; j< i; j++){
            if (A[i] > A[j]) {
                B[i] = max(B[j]+1,B[i]);
            }
        }
        kq = max(kq,B[i]);
    }
    cout << kq;
    return 0;
}
