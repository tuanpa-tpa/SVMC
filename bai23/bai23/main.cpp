//
//  main.cpp
//  bai23
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int t,n,A[1000];
bool ok = true;
void xuat(){
    for (int i = 0; i< n; i++) cout << A[i] << " ";
    cout << endl;
}

void sinh(){
    int i = n-2;
    while (A[i] > A[i+1]) i--;
    if ( i >= 0){
        int j = n-1;
        while (A[i] > A[j]) j--;
        swap(A[i],A[j]);
        int d = i+1,c = n-1;
        while (d < c){
            swap(A[d], A[c]);
            d++; c--;
        }
    }else  ok = false;
}

int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--){
        bool kt = true;
        cin >> n;
//        for (int i = 0; i< n; i++) A[i] = i+1;
        for (int i = 0; i< n; i++) cin >> A[i];
        for (int i = 0; i< n; i++)
            if (A[i] != n-i) {
                kt = false;
                break;
            }
        if (kt){
            for (int i = 0; i< n; i++) A[i] = i+1;
            xuat();
        } else {
//        while (ok){
         sinh();
        xuat();
//        }
        }
    }
    return 0;
}

