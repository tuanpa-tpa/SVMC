//
//  main.cpp
//  bai22
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int t,n,k,A[1000];
bool ok = false;

void xuat(){
    for (int i = 0; i< k; i++)
        cout<< A[i] << " ";
    cout << endl;
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
    cin >> t;
    while (t--) {
        bool kt = true;
        cin >> n >> k;
        
        for (int i = 0; i< k; i++) cin >> A[i];
        for (int i = 0; i< k; i++)
            if (A[i] != n-k+i+1) {
                kt = false;
                break;
            }
        if (kt){
            for (int i = 0; i< k; i++) A[i] = i+1;
            xuat();
        } else {
            sinh();
            xuat();
        }
    }
    return 0;
}
