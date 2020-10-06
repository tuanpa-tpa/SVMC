#include <iostream>
#include <stack>
#include <string>
using namespace std;
int t;
string s;
bool isOperator(char x){
    switch(x){
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
    }
    return false;
}

string xuLy(string s){
    int n = s.size();
    stack <string> st;
    for (int i = 0; i< n; i++){
        if (isOperator(s[i])){
            string s1 = st.top();st.pop();
            string s2 = st.top();st.pop();
            string temp = "(" + s2 + s[i] + s1 +")";
            st.push(temp);
        } else {
            st.push(string(1,s[i]));
        }
    }
    return st.top();
}

int main(){
    cin >> t;
    while(t--){
        cin >> s;
        cout << xuLy(s) << endl;
    }
    return 0;
}
