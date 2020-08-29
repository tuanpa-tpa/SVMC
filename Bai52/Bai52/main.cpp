//
//  main.cpp
//  Bai52
//
//  Created by PAT on 8/26/20.
//  Copyright © 2020 PAT. All rights reserved.
//
#include <iostream>
#include <algorithm>
using namespace std;
int t,n,m,A[100005],B[100005],C[100005],D[100005],E[100005];

void input(){
    cin >> n >> m;
    for (int i = 0; i< n; i++) cin >> A[i];
    for (int i = 0; i< m; i++) cin >> B[i];
}

int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--) {
        input();
        sort(A,A+n);
        sort(B,B+m);
        // xoa phan tu trung nhau
        int t1 =0;
        for (int i = 0; i< n-1; i++)
            if (A[i] == A[i+1]){
                A[i] = 0;
            }
        for (int i = 0; i< n; i++)
        if (A[i] != 0){
            D[t1] = A[i];
            t1++;
        }
        
        int t2 = 0;
        for (int i = 0; i< m-1; i++)
            if (B[i] == B[i+1]){
                B[i] = 0;
            }
        for (int i = 0; i< m; i++)
        if (B[i] != 0){
            E[t2] = B[i];
            t2++;
        }

        int max1 = D[t1-1];
        int max2 = E[t2-1];
        int MAX = max1;
        if (MAX < max2) MAX = max2;
        
        for (int i = 0; i<= 1e5+1; i++) C[i] =0;
        for (int i = 0; i< t1; i++){
            C[D[i]]++;
        }
        for (int i = 0; i< t2; i++){
            C[E[i]]++;
        }
        for (int i = 1; i<= MAX; i++){
            if (C[i] >= 1) cout << i << " ";
        }
        cout << endl;
        for (int i = 1; i<= MAX; i++){
            if (C[i] >= 2) cout << i << " ";
        }
    }
    return 0;
}

//1 2 3 5 6 7 8 20
//3 6 7
//1 2 3 5 6 7 8 20
//2 6







//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//int main()
//{
//    int t,n,m;
//    std::cin >> t;
//    while (t--) {
//        std::cin >> n >> m;
//        std::vector<int> v1;
//        std::vector<int> v2;
//        v1.clear();v2.clear();
//        int temp;
//        for (int i = 0; i< n; i++){
//            std::cin >> temp;
//            v1.push_back(temp);
//        }
//        for (int i = 0; i< m; i++){
//            std::cin >> temp;
//            v2.push_back(temp);
//        }
//
//
//        std::sort(v1.begin(), v1.end());
//        std::sort(v2.begin(), v2.end());
//
//        std::vector<int> a;
//        std::vector<int> b;
//        std::vector<int> c;
//
//        std::set_union(v1.begin(), v1.end(),
//                       v2.begin(), v2.end(),
//                       std::back_inserter(a));
//        std::set_intersection(v1.begin(), v1.end(),
//                              v2.begin(), v2.end(),
//                              std::back_inserter(b));
//        for (int i = 0 ; i< a.size()-1; i++)
//            if (a[i] != a[i+1]) c.push_back(a[i]);
//        c.push_back(a[a.size()-1]);
//        for (int n: c)
//            std::cout << n << ' ';
//        std::cout << std::endl;
//        if (b.size() == 0) std::cout << 0;
//        else
//        for(int n : b)
//            std::cout << n << ' ';
//        std::cout << std::endl;
//    }
//}
//



