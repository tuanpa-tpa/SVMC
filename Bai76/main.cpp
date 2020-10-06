#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    int t;
    string s;
    stack<char> st;
    cin >> t;
    while(t--){
        cin >> s;
        for (int i = 0; i< s.size(); i++){
            if (st.size() ==  0 && (s[i] == '(' || s[i] == ')')) st.push(s[i]);
            else if (s[i] == ')'){
               if (st.size() > 0 && st.top() == '('){
                st.pop();
               } else st.push(s[i]);
            } else st.push(s[i]);
            // cout << st.size() << " ";
        }

        int mo = 0,dong = 0;
        while(st.size() > 0){
            if (st.top() == '(') mo++;
            else dong++;
            st.pop();
        }
        cout << mo/2 + dong/2+ mo%2 + dong%2 << endl;
    }
    return 0;
}