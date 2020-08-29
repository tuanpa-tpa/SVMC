//
//  main.cpp
//  Bai56
//
//  Created by PAT on 8/27/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;
int main(int argc, const char * argv[]) {
    int t,A[1005][1005];
    string s1,s2;
    cin >> t;
    while (t--) {
        memset(A,0,sizeof(A));
        cin >> s1 >> s2;
        for (int i = 1; i<=s1.size(); i++){
            for (int j = 1; j<=s2.size(); j++){
                if (s1[i-1] == s2[j-1]) A[i][j] = A[i-1][j-1]+1;
                else {
                    A[i][j] = max(A[i-1][j],A[i][j-1]);
                }
            }
        }
        cout << A[s1.size()][s2.size()] << endl;
    }
    return 0;
}
