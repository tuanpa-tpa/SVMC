//
//  main.cpp
//  bai21
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
char str[1001],c;
int t = 0;
int i,n;
void xuat(){
    for (unsigned long j = 0; j < n; j++) cout << str[j];
}

void sinh(){
    i = strlen(str) - 1;
    n = i+1;
    while (i>=0 && str[i] != 48 ) { str[i] = 48; i--;}
    if (i >= 0) str[i] = 49;

}

int main() {
    cin >> t;
    while (t--){
        cin >> str;
        sinh();
        xuat();
        cout << endl;
    }
    
    return 0;
}
