//
//  main.cpp
//  Bai44
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
struct CV {
    int dau,cuoi;
};
CV A[1005];
bool check(CV a,CV b){
    return a.cuoi< b.cuoi;
}

int main(int argc, const char * argv[]) {
    int t,n,d;
    cin >> t;
    while (t--) {
        cin >> n;
        d = 1;
        for (int i = 0; i< n; i++) cin >> A[i].dau;
        for (int i = 0; i< n; i++) cin >> A[i].cuoi;
        sort(A,A+n,check);
        int i = 0;
        for (int j = 1; j< n; j++){
            if (A[j].dau >= A[i].cuoi){
                d++;
                i=j;
            }
        }
        cout << d << endl;
    }
    return 0;
}
