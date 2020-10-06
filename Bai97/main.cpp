#include <iostream>
#include <stack>
#include <sstream>
#include <stdio.h>
using namespace std;
int main(){
    int t;
    string s,tok;
    cin >> t;
    getline(cin,s);
    while(t--){
        fflush(stdin);
        getline(cin,s);
        stringstream ss(s);
        stack <char> stk;
            while(ss >> tok){
            int i = 0;
            while(tok.size() > i){
                stk.push(tok[i]);
                i++;
            }
            while (stk.size() > 0){
                cout << stk.top();
                stk.pop();
            }
            cout << " ";
        }
        
        cout << endl;
    }
    return 0;
}