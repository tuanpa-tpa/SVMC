#include <iostream>
#include <queue>
using namespace std;

string xuLy(int n){
    queue <string> st;
    st.push("1");
    while(st.size() > 0){
        long long temp = 0;
        string t = st.front();st.pop();
        // cout << t << " ";
        for (int i =0 ; i< t.size(); i++){
            temp = temp*10 + t[i] - '0';
        }
        if (temp % n == 0) return t;
        st.push(t+"0");
        st.push(t+"1");
    }
    return "1";
}

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << xuLy(n) << endl;
    }
    return 0;
}