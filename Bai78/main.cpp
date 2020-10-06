#include <iostream>
#include <stack>
using namespace std;

string xuLy(string s){
    string t;
    stack<int> st;
    for (int i = 0; i< s.size(); i++){
        if (s[i] == ')'){
            if (st.size() > 0){
                int temp = st.top();st.pop();
                if (temp == 0) continue;
                else
                if (s[temp-1] == '+') continue;
                else 
                if (s[temp-1] == '-'){
                for (int j = temp; j<= i; j++){
                    if (s[j] == '+') s[j] = '-';
                    else if (s[j] == '-') s[j] = '+';
                    }
                }    
            }
        } else if(s[i] == '(') st.push(i);
    }
    for (int i = 0; i< s.size(); i++) 
        if (s[i] != '(' && s[i] != ')')
            t += s[i];
    return t;
}
int main(){
    int t;string s1,s2;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        s1 = xuLy(s1);
        s2 = xuLy(s2);
        if (s1 == s2) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}