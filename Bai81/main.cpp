#include <iostream>
#include <stack>
#include <string>
using namespace std;
string xuLy(string s){
    stack<int> st;
    stack<string> sst;
        for (int i = 0; i< s.size(); i++){
            if (s[i] == ']'){
                    string tt = "";string tt2 = "";
                    int tmp = st.top()-1;st.pop();
                    // cout << tmp << " " << i <<" " << endl;
                    for (int j = i+1; j< s.size(); j++) tt2 += s[j];
                    int temp = (int)(s[tmp] - '0');
                    for (int j = 1; j<=temp; j++){
                        for (int k = tmp+2; k<= i-1;k++)
                            tt += s[k];
                    }
                    tt += '\0';
                    int rac = 0;
                    for (int j = tmp; j <= tmp + tt.size()-1; j++){
                        s[j] = tt[rac];
                        rac++;
                    }
                    rac = 0;
                    int j = tmp+tt.size();
                    while (rac < tt2.size()){
                        s[j] = tt2[rac];
                        rac++;
                    }
            } else if (s[i] == '[') st.push(i);
        }
    return sst.top();
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