#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <cstring>
using namespace std;
long long k,t,n = 0,A[1000];
string s;

void input(){
    cin >> k >> s;
    // memset(A,0,sizeof(A));
    for (int i = 0; i<= 300; i++) A[i] = 0;
}

long long KQ(){
    long long tong = 0;
    priority_queue <long long , vector<long long> > pqe;
    for (int i = 0; i< s.size(); i++){
        A[s[i]]++;
    }
    for (int i = 0; i<= 300; i++){
        if (A[i] > 0) pqe.push(A[i]);
    }
    while(k > 0 && pqe.size() > 0){
        long long t = pqe.top() -1;
        pqe.pop();
        pqe.push(t);
        k--;
    }
    while(pqe.size() > 0){
        long long tmp = pqe.top();
        tong += tmp*tmp;
        pqe.pop();
    }
    return tong;
}

int main(){
    cin >> t;
    while(t--){
        input();
        cout << KQ() << endl;
    }
    return 0;
}