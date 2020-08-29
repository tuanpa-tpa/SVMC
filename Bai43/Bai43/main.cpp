//
//  main.cpp
//  Bai43
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string s1,s2;
int t;

long long doiThapPhan(string s){
    long long temp = 0;
    int j = 0;
    for (int i = s.size()-1 ; i>=0 ; i--){
        long long t = s[i] - '0';
        temp += t*pow(2,j);
        j++;
    }
    return temp;
}

int main(int argc, const char * argv[]) {
    cin >> t;
    long long a,b;
    while (t--) {
        cin >> s1 >> s2;
        a = doiThapPhan(s1);
        b = doiThapPhan(s2);
        cout << a*b <<  endl;
    }
    return 0;
}
