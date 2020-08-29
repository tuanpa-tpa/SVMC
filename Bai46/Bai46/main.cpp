//
//  main.cpp
//  Bai46
//
//  Created by PAT on 8/26/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int t,d,dem[1000] = {0};
    string s;
    cin >> t;
    while (t--) {
        cin >> d >> s;
        int max = 0;
        for (int i = 0; i< 1000; i++){
            dem[i] = 0;
        }
        for (int i = 0; i< s.size(); i++){
            dem[s[i]]++;
            if (dem[s[i]] > max) max = dem[s[i]];
        }
//        cout << max << endl;
        if ((max-1)*(d-1) > (s.size()-max)) cout << -1;
        else cout << 1;
        cout << endl;
    }
    return 0;
}
