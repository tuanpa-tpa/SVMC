#include <iostream>
#include <cmath>
using namespace std;
long long doibinary(string s){
    int j = 0,n = s.size()-1;
    long long temp = 0;
    while (n >= 0){
        long long t = s[n] -'0';
        temp += t*pow(2,j);
        j++;
        n--;
    }
    return temp;
}

int main(){
    string s1,s2;
    int t;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        long long t1 = doibinary(s1);
        long long t2 = doibinary(s2);
        cout << t1*t2 << endl;
    }
    return 0;
}