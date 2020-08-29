//
//  main.cpp
//  Bai32
//
//  Created by PAT on 8/24/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector< vector<int> > kq;
vector<int> check;
vector<int> nt;

int t,n,p,s,temp;
bool kt[300] = {false};

void sangNt(){
    for (int i = 2; i<= 200; i++){
        if (!kt[i]){
            nt.push_back(i);
            for (int j = i*i; j<= 200; j+=i){
                kt[j] = true;
            }
        }
    }
}

void input(){
    cin >> n >> p >> s;
    temp = lower_bound(nt.begin(),nt.end(),p) - nt.begin(); // tim vi tri p
    for (int i = 0; i< 300; i++) kt[i] = false; // tra ve gia tri false
    kq.clear(); check.clear(); // xoa temp
}

void backtrack(int i,int tong){
    if (tong > s) return;
    if (tong == s && check.size() == n){
        kq.push_back(check);
        return;
    }
    for (int k = i; k < nt.size(); k++){
        if ((kt[k] == false) && (tong + nt[k] <= s) && (check.size() < n)){
            check.push_back(nt[k]);
            kt[k] = true;
            backtrack(k+1,tong+nt[k]);
            check.pop_back();
            kt[k] = false;
        }
    }
}

int main() {
    cin >> t;
    sangNt();
    while (t--) {
        input();
        backtrack(temp,0);
        sort(kq.begin(),kq.end());
        cout << kq.size() << endl;
        for (int i = 0; i< kq.size(); i++){
            for (int j = 0; j < kq[i].size(); j++){
                cout << kq[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
