//
//  main.cpp
//  Bai49
//
//  Created by PAT on 8/26/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int A[1000] = {0};

long long nt(long long te){
    if (te == 1) {
        A[1] = 1;
        return 1;
    }
    int i = 2;
    while (te > 1){
        while (te % i == 0){
            te/=i;
            A[i]++;
        }
        i++;
    }
    return i;
}
int main(){
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        
//        for (long long j = 1; j<= 1e18; j++){
            long long temp = nt(n);
            long long tong = 1;
            for (long long i = 1; i<= temp; i++)
                if (A[i] != 0)
                    tong *= A[i]+1;
//            if (tong == n) {
//                cout << j;
//                break;
        cout << tong;
//            }
//        }
        cout << endl;
        
    }
    return 0;
}

