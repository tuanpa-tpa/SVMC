#include <iostream>
using namespace std;
int main(){
    int t,n,A[100005];
    cin >> t;
    while (t--){
        bool check = false;
        cin >> n;
        for (int i = 0; i< n; i++) cin >> A[i]; 
        for (int i = 0; i < n; i++){
            check = false;
            for (int j = i+1; j < n ;j++)
                if (A[j] == A[i]) {
                    cout << A[i];
                    check = true;
                    break;
                }
            if (check) break;
        }
        if (!check) cout << "NO";
        cout << endl;
    }
       

    return 0;
}