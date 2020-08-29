//
//  main.cpp
//  Bai50
//
//  Created by PAT on 8/26/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    long long n,k;
    string s;
    cin >> t;
    while (t--) {
        cin >> s >> k;
        n = s.size();
        while (n<k) {
            n = n*2;
        }
        while (n > s.size()) {
            if (k > n/2){
                k = k - n/2;
                if (k > 1) k--;
                else k = n/2;
            }
            n/=2;
        }
        cout << s[k-1] << endl;
    }
    return 0;
}
