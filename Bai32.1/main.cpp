#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int n,t,s,p;
int A[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,
61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,
149,151,157,163,167,173,179,181,191,193,197,199};
vector <int> te;
vector < vector<int> > kq;
bool B[300] = {false};

void backTracking(int i,int tong){
    if (tong > s) return;
    if (tong == s && te.size() == n){
        kq.push_back(te);
        return;
    }
    for (int j = i; j<= 46; j++)
        if ((B[j] == false) && (tong + A[j] <= s) && (te.size() < n)){
            B[j] = true;
            te.push_back(A[j]);
            backTracking(j+1,tong+A[j]);
            te.pop_back();
            B[j] = false;
        }
}

int main(){
    // cout << A[45];
    cin >> t;
    while(t--){
        cin >> n >> p >> s;
        int temp = 0;
        while (A[temp] <= p) temp++;
        kq.clear();te.clear();
        for (int i = 0; i < 300; i++) B[i] = false;
        backTracking(temp,0);
        sort(kq.begin(),kq.end());
        cout << kq.size() << endl;
        for (int i = 0; i< kq.size(); i++){
            for (int  j = 0; j< kq[i].size();j++){
                cout << kq[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}