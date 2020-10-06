#include <iostream>
using namespace std;
bool kt;
int binarySearch(int A[],int k,int l, int r){
    int mid;
    while(l <= r){
        mid = (l+r)/2;
        if (A[mid] == k) {
            return mid;
        }
        if (A[mid] > k) r = mid - 1;
        if (A[mid] < k) l = mid + 1;
    }
    return 0;
}

int main(){
    int n,k,t,A[100005];
    cin >> t;
    while(t--){
        cin >> n >> k;
        for (int i = 1; i<= n; i++) cin >> A[i];
        int temp = binarySearch(A,k,1,n);
        if (!temp) cout << "NO";
        else cout << temp;
        cout << endl;
    }
    return 0;
}