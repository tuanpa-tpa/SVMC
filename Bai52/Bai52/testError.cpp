#include <iostream>
using namespace std;

int t,n,m,a[100005],b[100005],c[100005]={0};
int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        int mina=100001,maxa=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            c[a[i]]++;
            if(a[i]<mina)mina=a[i];
            if(a[i]>maxa)maxa=a[i];
        }
        for(int i=0;i<m;i++){
            cin >> b[i];
            c[b[i]]++;
            if(b[i]<mina)mina=b[i];
            if(b[i]>maxa)maxa=b[i];
        }
        for(int i=mina;i<=maxa;i++){
            if(c[i]>0)cout << i << " ";
        }
        cout << endl;
        for(int i=mina;i<=maxa;i++){
            if(c[i]==2)cout << i << " ";
            c[i]=0;
        }
        cout << endl;
    }
    return 0;
}
// sai test :<
