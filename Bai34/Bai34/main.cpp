//
//  main.cpp
//  Bai34
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int s,n,k,A[1000],d;
bool ok = false;

void xuat(){
    int t = 0;
    for (int i = 0; i< k; i++)
        t += A[i];
    if (t == s) d++;
}

void sinh(){
    int i = k-1;
    while (n-k+i+1 == A[i]) i--;
    if ( i >= 0){
        A[i]++;
        for (int j = i+1; j < k; j++)
            A[j] = A[j-1]+1;
    } else ok = true;
}

int main(int argc, const char * argv[]) {
    while (true) {
        cin >> n >> k >> s;
        if ( n < k) {
            cout << 0 << endl;
            continue;
        }
        if ( n == 0 && k == 0 && s == 0) break;
        for (int i = 0; i< n; i++) A[i] = i+1;
        d = 0;
        ok = false;
        while (!ok){
            xuat();
            sinh();
        }
        cout << d << endl;
    }
    return 0;
}
