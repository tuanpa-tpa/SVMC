//
//  main.cpp
//  Bai48
//
//  Created by PAT on 8/26/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int t,n;
    int a = 0,b = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i<=n; i++){
            if (n >= 4*i && (n-4*i) % 7 == 0){
                a = i; b = (n-4*i)/7;
                break;
            }
        }
        if (a*4 + b*7 == n){
            for (int i = 1; i<= a; i++) cout << 4;
            for (int i = 1; i<= b; i++) cout << 7;
        } else cout << -1;
        
        cout << endl;
    }
    return 0;
}
