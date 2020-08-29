#include <iostream>
#include <algorithm>
using namespace std;

long long ucln(long long a, long long b){
    long long temp;
    if (a < b) swap(a,b);
    while(b != 0){
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int t;
    long long a,b;
    cin >> t;
    while (t--){   
        cin >> a >> b;
        long long u = ucln(a,b);
        cout << u << " ";
        cout << a*b/u << endl;
    }
    return  0;
}