#include <iostream>
#include <stack>
using namespace std;
int main(){
    int t,s,d;
    stack <int> st;
    cin >> t;
    while(t--){
        cin >> s >> d;
        if (s < 1 || d < 1 || s > 9*d){
            cout << -1 << endl;
            continue;
        }
        int A[1005] = {0},n = d-1;
        A[0] = 1; s--;
        while(s > 8){
            A[n] = 9;
            n--;
            s -= 9;
        }
        A[n] += s;
        for (int i = 0; i< d;i++) cout << A[i];

        // while(s > 0){
        //     D--;
        //     if (s > 9){
        //         st.push(9);
        //         s -= 9;
        //     }
        //     else {
        //         st.push(s);
        //         break;
        //     }
        // }
        // if (D < 0) cout << "-1";
        // else {
        //     if (D > 0){
        //         int temp = st.top(); st.pop();
        //         st.push(temp-1);
        //         while(D > 1) {
        //             st.push(0);
        //             D--;
        //         }
        //         st.push(1);
        //     }
        // }
        // while (st.size() > 0) {
        //     cout << st.top();
        //     st.pop();
        // }
        cout << endl;
    }
    return 0;
}