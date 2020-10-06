#include <iostream>
#include <stack>
#include <string>
using namespace std;
long long xuLy(string s){
    stack<long long> st;
    for (int i = s.size()-1; i>=0 ; i--){
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ){
                long long temp = 0;
                long long t1 = st.top();st.pop();
                long long t2 = st.top();st.pop();
                if (s[i] == '+') temp = t1+t2;
                else if (s[i] == '-') temp = t1-t2;
                else if (s[i] == '*') temp = t1*t2;
                else if (s[i] == '/') temp = t1/t2;
                st.push(temp);
        } else st.push((long long)(s[i] - '0'));
    }
    return st.top();
}

int main(){
    int t;string s;
    cin >> t;
    while(t--){
        cin >> s;
        cout << xuLy(s) << endl;
    }
    return 0;
}
