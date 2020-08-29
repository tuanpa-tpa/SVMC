#include <iostream>
#include <vector>
using namespace std;
vector<int> A;

int tongCS(int n){
    int t = 0;
    while (n > 0){
        t += n%10;
        n/=10;
    }
    return t;
}

int tongNT(int n){
    int i = 2,t =0;
    while (n >= 2){
        while(n % i == 0){
            t+= tongCS(i);
            n /= i;
        }
        i++;
    }
    return t;
}

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a = tongCS(n);
        int b = tongNT(n);
        // cout << b << " ";
        if (a == b) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}