//
//  main.cpp
//  bai25_1
//
//  Created by PAT on 8/17/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int n,k,a[1000],t,x[1000];
bool ok = false,kt;

void xuat(){
    for (int i = 0; i< k; i++)
        cout << x[i] << " ";
    cout << endl;
}

void sinh(){
    int i = k-1;
    while (x[i-1] == x[i] -1) i--;
    if (i >= 0) {
        x[i] --;
        for (int j = i+1; j< k; j++){
            x[j] = n-k+j+1;
        }
    }
    if (i < 0) ok = true;
}

int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--){
        kt = true;
        cin >> n >> k;
        for (int i = 0; i< k; i++)
            cin >> x[i];
        for (int i = 0; i< k; i++){
            if (x[i] != i+1) {
                kt = false;
                break;
            }
        }
        
        if (kt){
            for (int i = n-k+1; i<= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else {
            while (!ok) {
                sinh();
                xuat();
                break;
            }
        }
    }
    
    return 0;
}
