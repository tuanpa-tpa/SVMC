#include <iostream>
#include <string>
using namespace std;
int t;
string s;
bool kt;
void xuat(){
    for (int i = 0; i<s.size(); i++) cout << s[i];
    cout << " ";
}
void sinh(){
    int n = s.size()-1;
    int i = n-1;
    while(s[i] > s[i+1]) i--;
    if (i >= 0){
        int j = n;
        while(s[i] > s[j]) j--;
        swap(s[i],s[j]);
        int d = i+1,c = n;
        while(d < c){
            swap(s[d],s[c]);
            d++;c--;
        }

    } else kt = false;
}

int main(){
    cin >> t;
    while(t--){
        cin >>s;
        kt = true;
        while(kt){
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}