//
//  main.cpp
//  tongBangX
//
//  Created by PAT on 8/24/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector < vector<int> > kq;
vector <int> check;
int t,n,x,A[100];
void input(){
    cin >> n >> x;
    for (int i = 1; i<= n; i++) cin >> A[i];
}

void backtrack(int i , int s){
    if (s > x) return;
    if (s == x) {
        kq.push_back(check);
        return;
    }
    for (int j = i; j<= n; j++){
        if (s + A[j] <= x){
            check.push_back(A[j]);
            backtrack(j, s+A[j]);
            check.pop_back();
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--) {
        input();
        kq.clear();check.clear();
        backtrack(1,0);
        if (kq.size() == 0) cout << -1;
        else
        for (int i = 0; i< kq.size(); i++){
            cout << "[";
            for (int j = 0; j < kq[i].size()-1; j++){
                cout << kq[i][j] << " ";
            }
            cout << kq[i][kq[i].size()-1] << "]" ;
        }
        cout << endl;
    }
    return 0;
}

