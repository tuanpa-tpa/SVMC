#include <iostream>
using namespace std;
int t,A[30],cot[30],xuoi[30],nguoc[30],X[30][30],m;
void xuat(){
    int temp = 0;
    for (int i = 1; i<= 8; i++)
        temp += X[i][A[i]];
    if (temp > m) m = temp;
}
void backtrack(int i){
    for (int j = 1; j<= 8; j++){
        if (!cot[j] && !xuoi[i-j+8] && !nguoc[j+i-1]){
            A[i]= j; 
            cot[j] = 1; xuoi[i-j+8] = 1;nguoc[j+i-1] = 1;
            if (i == 8) xuat();
            else backtrack(i+1);
            cot[j] = 0; xuoi[i-j+8] = 0;nguoc[j+i-1] = 0;
        }
    }
}

int main(){
    cin >> t;
    while (t--) {
        for (int i = 1; i<= 8; i++){
            for (int j = 1; j<= 8; j++){
                cin >> X[i][j];
            }
        }
        m = 0;
        backtrack(1);
        cout << m << endl;
    }
}
