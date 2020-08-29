#include <iostream>
using namespace std;
int main(){
    int t,c,m;
    cin >> t;
    while(t--){
        cin >> c >> m;
        if (c %(m+1) == 0) cout << "Second";
        else cout << "First";
        cout << endl;
    }

    return 0;
}