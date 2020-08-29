#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
struct mang{
    long long a;
    long long b;
} A[100005];
bool tang(mang a,mang b){ return (a.b < b.b); }
int main(){
    long long t,n,X;
    cin >> t;
    while(t--){
        cin >> n >> X;
        for (long long i = 0; i< n; i++){
            cin >> A[i].a;
            A[i].b = llabs(X-A[i].a);
        }
        sort(A,A+n,tang);
        // bool check;
        // for (long long i = 0; i < n ; i++ ){
        //     check = false;
        //     for (long long j = 0; j < n - 1; j++) {
        //         if (A[j].b > A[j+1].b){
        //             swap(A[j].b,A[j+1].b);
        //             swap(A[j].a,A[j+1].a);
        //             check = true;
        //         }
        //     }
        //     if (!check) break;
        // }
        for (long long i = 0; i< n; i++) cout << A[i].a << " ";
        cout << endl;
    }
    return 0;
}