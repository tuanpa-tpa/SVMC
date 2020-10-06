#include <iostream>
#include <string>
using namespace std;
int t;
string s;
void sinh(){
    int n = s.size();
    int i = n-1;
    while(i>=0 && s[i] != 48){
        s[i] = 48;
        i--;
    }
    if (i >= 0) s[i] = 49;
}
void xuat(){
    for (int i = 0 ; i< s.size();i++) cout << s[i];
}
int main(){
    cin >> t;
    while(t--){
        cin >> s;
        sinh();
        xuat();
        cout << endl;
    }
    return 0;
}