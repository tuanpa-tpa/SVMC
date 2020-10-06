#include <iostream>
using namespace std;
int t,n,k,A[100];
bool ok;

void xuat(){
    for (int i = 1; i<= k; i++){
        if (i == 1) cout << "(";
        cout << A[i];
        if (i < k) cout << " ";
        else cout << ") ";
    } 
}
void sinh(){
    int i = k;
    while(i>=1 && A[i] == 1) i--;
    if (i>=1){
        A[i]--;
        int d = k-i+1;
        k = i;
        for (int j= i+1; j<= i+d/A[i]; j++)
            A[j] = A[i];
        k+= d/A[i];
        if (d % A[i]){
            k++;
            A[k] = d%A[i];
        }
    } else ok = true;
}

int main(){
    cin >> t;
    while(t--){
        ok = false;
        cin >> n;
        k = 1;
        A[k] = n;
        while(!ok){
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}