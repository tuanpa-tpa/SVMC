//
//  main.cpp
//  Bai69
//
//  Created by PAT on 8/26/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t,n,v,A[1005],C[1005],M[1005][1005];
    cin >> t;
    while (t--) {
        cin >> n >> v;
        for (int i = 1; i<= n; i++) cin >> A[i];
        for (int i = 1; i<= n; i++) cin >> C[i];
        for (int i = 0; i<= v; i++) M[0][i] =0;
        for (int i = 1; i<= n; i++){
            for (int j = 1; j<= v; j++){
                M[i][j] = M[i-1][j];
                if ((A[i] <= j) && (M[i-1][j-A[i]]+C[i] > M[i-1][j])){
                    M[i][j] = M[i-1][j-A[i]]+C[i];
                }
            }
        }
        cout << M[n][v] << endl;

    }
    return 0;
}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n,M;
//struct vui{
//    int w =0, v = 0;
//};
//vui a[1005];
//int dp[1005][1005];
//int res = 0;
//void solve(){
//    for (int i = 0; i<= M; i++) dp[0][i] = 0;
//    for(int i = 1; i <= n; i++){
//        for(int j = 1; j <= M; j++){
//                dp[i][j] = dp[i-1][j];
//            if (a[i].w <= j && dp[i-1][j-a[i].w]+a[i].v > dp[i-1][j])
//                dp[i][j] = dp[i-1][j-a[i].w] + a[i].v;
//            }
//        }
//    }
//
//int main(){
//    int t;
//    cin >> t;
//    while(t--){
//        cin >> n >> M;
//        for(int i = 1; i <= n; i++){
//            cin >> a[i].w;
//        }
//        for(int i = 1; i <= n; i++){
//            cin >> a[i].v;
//        }
//        solve();
//        cout << dp[n][M]<< endl;
//    }
//    return 0;
//}
