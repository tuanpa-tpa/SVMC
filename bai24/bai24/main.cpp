//
//  main.cpp
//  bai24
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <cstring>
int n,t;
char str[1001];

void xuat(){
    for (int i = 0; i<= n; i++) std::cout << str[i];
    std::cout << std::endl;
}

void sinh(){
    int i = n;
    while (i>=0 && str[i] != 49 ) { str[i] = 49; i--;}
    if (i >= 0) str[i] = 48;
}


int main(int argc, const char * argv[]) {
    std::cin >> t;
    while (t--) {
        std::cin >> str;
        n = strlen(str) -1;
        sinh();
        xuat();
    }
    return 0;
}
