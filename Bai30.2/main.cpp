#include <iostream>
using namespace std;
int A[105],n,x,ok,B[105];
void backTrack(int i,int sum,int k)
{
    if(sum==x){
        cout << "[";
        for(int k=0;k<i-1;k++)cout << B[k] << " ";
        cout << B[i-1] << "]";
        ok=1;
        return;
    }
    for (int j = k; j<n; j++){
        if (sum+A[j] <= x){
            sum += A[j];
            B[i] = A[j];
            backTrack(i+1,sum,j);
            sum -= A[j];
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        for(int i=0;i<n;i++)cin >> A[i];
        ok=0;
        backTrack(0,0,0);
        if(ok==0)cout << -1;
        cout << endl;
    }
    return 0;
}
