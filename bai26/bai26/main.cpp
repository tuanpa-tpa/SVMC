//
//  main.cpp
//  bai26
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
int t,n,k,A[20];
bool kt = true;
void xuat(){
    for (int i = 0; i< k; i++) std::cout << A[i];
    std::cout << " ";
}
void sinh(){
    int i = k -1;
    while (n-k+i+1 == A[i]) i--;
    if (i >= 0){
        A[i]++;
        for (int j = i+1; j< k; j++)
            A[j] = A[j-1]+1;
    } else kt = false;
}

int main(int argc, const char * argv[]) {
    std::cin >> t;
    while (t--){
        std::cin >> n >> k;
        for (int i = 0; i< k; i++) A[i] = i+1;
        kt = true;
        while (kt){
            xuat();
            sinh();
        }
        std::cout << std::endl;
    }
    return 0;
}
