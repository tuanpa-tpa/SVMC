//
//  main.cpp
//  bai28
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int t,n;
char str[20];
bool kt =true;
void xuat(){
    for (int i = 0; i< n; i++) cout << str[i];
    cout << " ";
}
void sinh(){
    int i = n-2;
    while (str[i] > str[i+1]) i--;
    if (i >= 0){
        int j = n-1;
        while (str[i] > str[j]) j--;
        swap(str[i],str[j]);
        int d = i+1,c = n-1;
        while (d < c){
            swap(str[d],str[c]);
            d++;
            c--;
        }
    } else kt = false;
}

int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--){
        cin >> str;
        kt = true;
        n = strlen(str);
        while(kt){
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}
