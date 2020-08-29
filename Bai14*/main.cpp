#include <iostream>
using namespace std;
int main(){
    long long t,P,Q;
    cin >> t;
    while(t--){
        cin >> P >> Q;
        long long temp;
        while(true){
            if (Q%P == 0){
                cout << "1/"<< Q/P;
                break; 
            }
            temp = Q/P+1;
            cout << "1/" << temp << " + ";
            P = P*temp - Q;
            Q = temp*Q;
        }
        cout << endl;
    }
    return 0;
}