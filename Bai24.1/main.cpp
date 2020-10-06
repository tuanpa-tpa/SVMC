#include <iostream>
using namespace std;
int t;
string s;
void xuat(){
    for (int i = 0; i< s.size(); i++) cout << s[i];
}
void sinh(){
    int i = s.size() -1;
    while (i >= 0 && s[i] != 49){
        s[i] = 49; i--;
    }
    if (i >= 0){
        s[i] = 48;
        for (int j = i+1; j< s.size(); j++) s[j] = 49;
    }
}
int main(){
    cin >> t;
    while (t--){
        cin >> s;
        sinh();
        xuat();
        cout << endl;
    }
    return 0;
}