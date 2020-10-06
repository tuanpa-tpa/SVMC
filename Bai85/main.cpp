#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int t;
string s;
int xuLy(){
    int MAX =0;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i< s.size(); i++) {
        if (s[i] == '('){
            st.push(i);
        } else {
            st.pop();
            if (st.size() > 0) MAX = max(MAX,i-st.top());
            else st.push(i);
        }
    }
    return MAX;
}

int main(){
    cin >> t;
    while (t--){
        cin >> s;
        cout << xuLy() << endl;
    }
    return 0;
}