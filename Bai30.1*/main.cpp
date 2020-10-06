#include <iostream>
#include <vector>
using namespace std;
int t,n,x,A[105],B[105];
vector < vector<int> > kq;
vector <int> temp;

void backtrack(int i,int s){
    if (s > x) return;
    if (s == x){
        kq.push_back(temp);
        return;
    }
    for (int j = i; j<= n; j++){
        if (s + A[j] <= x){
            temp.push_back(A[j]);
            backtrack(j,s+A[j]);
            temp.pop_back();
        }
    }
}
int main(){
    cin >> t;
    while(t--){
        cin >> n >> x;
        kq.clear();
        temp.clear();
        for (int i = 1; i<= n; i++) cin >> A[i];
        backtrack(1,0);
        if (kq.size() == 0) cout << -1;
        else{
            for (int i = 0; i< kq.size(); i++){
                cout << "[";
                for (int j = 0; j< kq[i].size()-1;j++){
                    cout << kq[i][j] << " ";
                }
                cout << kq[i][kq[i].size()-1];
                cout << "]";
            }
        }
        cout << endl;
    }
    return 0;
}