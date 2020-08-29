#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> A(1005);
int t,n,d;
void check(){
    for (int i = 0; i < n-1; i++) 
        if (A[i+1] > A[i]) d+= A[i+1]-A[i]-1;
}
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        d =0;
        for (int i = 0; i< n; i++) cin >> A[i];
        sort(A.begin(),A.begin()+n);
        check();
        cout << d << endl;
    }
    return 0;
}