//
//  main.cpp
//  Bai54
//
//  Created by PAT on 8/25/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int t,n;
vector<int> A(1000000);

void merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* Tạo các mảng tạm */
    int L[n1], R[n2];
 
    /* Copy dữ liệu sang các mảng tạm */
    for (i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (j = 0; j < n2; j++)
        R[j] = A[m + 1+ j];
 
    /* Gộp hai mảng tạm vừa rồi vào mảng A*/
    i = 0; // Khởi tạo chỉ số bắt đầu của mảng con đầu tiên
    j = 0; // Khởi tạo chỉ số bắt đầu của mảng con thứ hai
    k = l; // IKhởi tạo chỉ số bắt đầu của mảng lưu kết quả
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy các phần tử còn lại của mảng L vào A nếu có */
    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy các phần tử còn lại của mảng R vào A nếu có */
    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}


void mergesort(int l,int r){
    if (l < r){
        int mid = (l+r)/2;
        mergesort(l, mid);
        mergesort(mid+1, r);
        merge(l,mid,r);
    }
}

int main(int argc, const char * argv[]) {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i< n; i++) cin >>A[i];
//        sort(A.begin(),A.end());
        mergesort(0,n-1);
        for (int i = 0; i< n; i++) cout << A[i] << " ";
        cout << endl;
    }
    return 0;
}
