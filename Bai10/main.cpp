#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void chuyenMin(string& str){
    for (int i = 0; i < str.size(); i++)
        if (str[i] == '6') str[i] = '5';
}
void chuyenMax(string& str){
    for (int i = 0; i < str.size(); i++)
        if (str[i] == '5') str[i] = '6';
}

int chuyenSo(string& s){
    int t = 0;
    for (int i = 0; i< s.size(); i++){
        t = t*10+s[i] -'0';
    }
    return t;
}


int main(){
    string a,b,c,d;
    cin >> a >> b;
    c = a; d = b;
    chuyenMin(a);chuyenMin(b);
    chuyenMax(c);chuyenMax(d);
    // cout << c << " " << d;
    // khong dung ham itoi duoc :<
    int at = chuyenSo(a),att = chuyenSo(c);
    int bt = chuyenSo(b),btt = chuyenSo(d);
    long long min = at+bt,max = att+btt;
    cout << min << " "<< max << endl;
    return 0;
}