//
//  main.cpp
//  Bai40
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int A[200];
int t,n;

long long tong(){
    long long temp = 0,max = A[0];
    for (int i = 0; i< n; i++){
        if (temp + A[i] < 0){
            temp = 0;
        } else {
            temp += A[i];
            if (temp >= max) max = temp;
        }
    }
    return max;
}


int main(int argc, const char * argv[]) {
    cin >>t ;
    while (t--) {
        cin >> n;
        for (int i = 0; i< n; i++){
            cin >> A[i];
        }
        cout << tong() << endl;
    }
    
    return 0;
}
