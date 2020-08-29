//
//  main.cpp
//  Bai29
//
//  Created by PAT on 8/23/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int t,n,A[100][100];
bool check[100][100];
vector <string> s;
void input(){
    s.clear();
    cin >> n;
    for (int i = 1; i<= n; i++){
        for (int j = 1; j<= n; j++){
            cin >> A[i][j];
            check[i][j] = false;
        }
    }
}
void backtrack(int i, int j, string str){
    if (A[1][1] == 0 || A[n][n] == 0){
        return;
    }
    if (i == n && j == n){
        s.push_back(str);
        return;
    }
    // xuong
    if (i != n && A[i+1][j] == 1 && !check[i+1][j]){
        check[i][j] = true;
        backtrack(i+1,j, str +"D");
        check[i][j] = false;
    }
    // sang phai
    if (j != n && A[i][j+1] == 1 && !check[i][j+1]){
        check[i][j] = true;
        backtrack(i,j+1, str +"R");
        check[i][j] = false;
    }
    // len
    if (i != 1 && A[i-1][j] == 1 && !check[i-1][j]){
        check[i][j] = true;
        backtrack(i-1,j, str +"U");
        check[i][j] = false;
    }
    // sang trai
    if (j != 1 && A[i][j-1] == 1 && !check[i][j-1]){
        check[i][j] = true;
        backtrack(i,j-1, str +"L");
        check[i][j] = false;
    }
}


int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--){
        input();
        backtrack(1,1,"");
        if (s.size() == 0) cout << "-1" << endl;
        else {
            sort(s.begin(),s.end());
            for (int i = 0; i< s.size(); i++)
                cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
//DRDDRR
//DDRDRR DRDDRR
//DDRRURRDDD DDRURRRDDD DRDRURRDDD DRRRRDDD
//DRDDRR
//DDRDRR DRDDRR
//DDRRURRDDD DDRURRRDDD DRDRURRDDD DRRRRDDD
