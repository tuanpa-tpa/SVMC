#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    int t;string s,temp;
        cin >> s;
        for (int i =1; i<= 3; i++)
            for (int j = 0; j< s.size(); j++){
                temp += s[j];
            }
        cout << temp;
    return 0;
}