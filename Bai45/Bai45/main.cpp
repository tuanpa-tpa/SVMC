//
//  main.cpp
//  Bai45
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <queue>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long temp;
        priority_queue <long long, vector<long long>, greater<long long> > a;
        cin >> n;
        for (int i = 0; i< n; i++) {
            cin >> temp;
            a.push(temp);
        }
        if (n == 1) cout << a.top() << endl;
        else {
            long long tong = 0;
            while (a.size() > 1) {
                long long mot = a.top(); a.pop();
                long long hai = a.top(); a.pop();
                a.push(mot+hai);
                tong += mot+hai;
            }
            cout << tong << endl;
        }
    }
    return 0;
}
// 2 3 4 6 ->5
// 4 5 6 -> 5+ 4+5;
// 6 9 -> 5+ 4+5 +6+9
// 15
