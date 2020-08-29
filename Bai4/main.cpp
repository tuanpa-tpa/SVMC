#include <iostream>
#include <string>
using namespace std;

bool tang(string s);
bool giam(string s);
int main(){
    int t;
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        if (tang(s) || giam(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
bool tang(string s){
    for (int i = 0; i< s.size()-1; i++){
        if (s[i] > s[i+1]) return false;
    }
    return true;
}
bool giam(string s){
    for (int i = 0; i< s.size()-1; i++){
        if (s[i] < s[i+1]) return false;
    }
    return true;
}