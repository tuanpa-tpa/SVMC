#include <iostream>
#include <stack>
using namespace  std;
int t,n,A[100005],B[100005];
// 4 5 2 25
void tach(){
    stack<int> st;
    for (int i = n; i>=1; i--){
        while (st.size() > 0 && st.top() <= A[i]) st.pop();
        if (st.size() == 0) B[i] = -1;
        else B[i] = st.top();
        st.push(A[i]);
    }
}
void xuat(){
    for (int i = 1; i<= n; i++) cout << B[i] << " ";
    cout <<  endl;
}

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for (int i= 1; i<= n; i++) cin >> A[i];
        tach();
        xuat();
    }
    return 0;
}