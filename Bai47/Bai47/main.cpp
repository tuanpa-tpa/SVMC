//
//  main.cpp
//  Bai47
//
//  Created by PAT on 8/26/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int t,k,d[1000000]={0};
    string s;
    cin >> t;
    while (t--) {
        priority_queue< int > a;
        cin >> k >> s;
        for (int i = 0; i< 1000000; i++) d[i] = 0;
        for (int i = 0; i< s.size(); i++) d[s[i]]++;
        for (int i = 0; i< s.size(); i++){
            if (d[s[i]] > 0){
                a.push(d[s[i]]);
                d[s[i]] = 0;
            }
        }
        while (a.size()>0 && k > 0) {
            k--;
            int temp = a.top()-1;
            a.pop();
            a.push(temp);
        }
        
        long long tong = 0;
        while (a.size() > 0){
            int c = a.top();
            tong+= c*c;
            a.pop();
        }
        cout << tong << endl;
    }
    return 0;
}
