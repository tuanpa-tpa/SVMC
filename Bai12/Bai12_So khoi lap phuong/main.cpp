//
//  main.cpp
//  Bai12_So khoi lap phuong
//
//  Created by PAT on 8/20/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int t,A[20],B[20],C[20],d1;
long long n,kq = -1;
bool kt = false;

bool kiemTra(long long n){
    for(long long i = 1 ; i*i*i <= n;i++){
        if(i*i*i==n) return true;
    }
    return false;
}

void tach(long long n){
    int d = 0;
    while (n > 0){
        d1++;
        A[d1] = n % 10;
        n/=10;
    }

    for (int i  = d1; i>= 1; i--){
        d++;
        C[d] = A[i];
    }
    for (int i = 1; i<= d1; i++){
        A[i] = C[i];
    }
}

void backtrackSinh(long long n, int i){
    for (int j = 0; j<= 1; j++){
        B[i] = j;
        if (i == d1){
            long long temp = 0;
            for (int k = 1; k<= d1; k++){
                if (B[k] == 1) {
                    temp = temp *10 + A[k];
                }
            }
            if (kiemTra(temp) && temp != 0 && temp > kq) {
                kq = temp;
            }
        } else backtrackSinh(n, i+1);
    }
}

int main(){
    cin >> t;
    while (t--) {
        cin >> n;
        d1 = 0;
        kq = -1;
        long long ad = n;
        tach(n);
        for (int i = 0; i<= d1; i++) B[i] = 0;
        backtrackSinh(ad,1);
        cout << kq << endl;
    }
    return 0;
}
