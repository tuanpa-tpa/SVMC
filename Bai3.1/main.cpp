#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    string s;
    int a,b,c;
    cin >> t;
    while(t--){
        cin >> a >> s >> b >> s >> c;
        if (a + b == c) cout << "YES";
        else cout << "NO";
        cout << endl; 
    }
    return 0;
}