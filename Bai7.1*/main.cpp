#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int kiemTraCanh(int a){
    int temp = sqrt(a);
    if (temp*temp == a) return temp;
    temp++;
    if (temp*temp == a) return temp;
    return 0;
}

int main(){
    int t,a,b,c,d,e,f;
    cin >> t;
    while(t--){
        cin >> a >> b >> d >> c >> e >> f;
        int S = a*b +c*d +e*f;
        int canh = kiemTraCanh(S);
        if (canh == 0) cout << "NO";
        else {
            if (a > b) swap(a,b);
            if (c > d) swap(c,d);
            if (e > f) swap(e,f);
            if (b == d && d == f && f == canh) cout << "YES";
            else {
                if (d == canh) {
                    swap(a,c);
                    swap(b,d);
                }
                if (f == canh) {
                    swap(a,e);
                    swap(b,f);
                }
                if (b == canh){
                    a = canh - a;
                    if ((a == c && a == e) || (a == c && a == f)  || (a == d && a == e) || (a == d && a == f))
                        cout << "YES";
                    else cout << "NO";
                } else cout << "NO";
            }
        }
        cout << endl;
    }
    return 0;
}