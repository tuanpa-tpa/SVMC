#include <iostream>
using namespace std;
int main(){
    int t,n,d,A[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    cin >> t;
    while (t--){
        d = 0;
        int temp = 9;
        cin >> n;
        while (temp >= 0 && n > 0) {
            while ((n >= A[temp])){
                d++;
                n -= A[temp];
            }
            temp--;
        }
        cout << d << endl;
    }
    return 0;
}
