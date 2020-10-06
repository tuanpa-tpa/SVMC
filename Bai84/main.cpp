#include <iostream>
#include <stack>
#include <string>
using namespace std;

string xuLy(string s){
    stack<char> st;
    bool check = true;
    for (int i = 0; i< s.size(); i++){
        if (s[i] == '[' || s[i] == '{' || s[i] == '('){
            st.push(s[i]);
        } else if(s[i] == ']'){
            if (st.size() == 0) check = false;
            else if (st.top() == '[') st.pop();
        } else if(s[i] == '}'){
            if (st.size() == 0) check = false;
            else if (st.top() == '{') st.pop();
        } else if(s[i] == ')'){
            if (st.size() == 0) check = false;
            else if (st.top() == '(') st.pop();
        }
    }
    if (st.size() > 0) check = false;
    if (check) return "YES";
    else return "NO";
}
int main(){
    int t; string s;
    cin >> t;
    while(t--){
        cin >> s;
        cout << xuLy(s) << endl;
    }
    return 0;
}