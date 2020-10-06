#include <iostream>
#include <stack>
using namespace std;
int t; string s;
void xuLy(){
    stack<int> st;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == ')'){
            if (st.size() > 0){
                int temp = st.top();st.pop();
                if (temp == 0) continue;
                else if (s[temp-1] == '+') continue;
                else if (s[temp-1] == '-'){
                    for (int j = temp; j<= i ; j++){
                        if (s[j] == '+') s[j] = '-';
                        else if (s[j] == '-') s[j] = '+';
                        }
                    }   
            }
        } else if (s[i] == '(') st.push(i);
    }
}
void xuat(){
    for (int i = 0; i< s.size(); i++) 
        if (s[i] != '(' && s[i] != ')')
            cout << s[i];
}
int main(){
    cin >> t;
    while(t--){
        cin >> s;
        xuLy();
        xuat();
        cout << endl;
    }
    return 0;
}