//
//  main.cpp
//  27
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int X[100],k,t,n;
bool ok = true;

void next(){
    int i = k, j, R, S,D;
    while (i > 0 && X[i]==1 ) i--;
    if (i > 0 ) {
        X[i] = X[i] - 1;
        D = k - i + 1;
        R = D / X[i];
        S = D % X[i];
        k= i;
        if (R>0) {
            for ( j = i +1; j<=i + R; j++)
                X[j] = X[i];
            k = k + R;
        }
        if (S>0 ){
            k = k +1; X[k] = S;
        }
    }
    else ok = false;
}


int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--) {
        cin >> n;
        ok = true;
        X[1] = n;
        k = 1;
        while (ok) {
//            next();
            cout << "(";
            for (int j = 1; j< k ;j++) cout << X[j] << " ";
            cout << X[k] <<") ";
            next();
        }
        cout << endl;
    }
    return 0;
}

