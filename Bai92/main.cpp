#include <iostream>
// #include <algorithm>
using namespace std;
void xuat(int A[],int n){
    for (int i = 1; i<= n; i++) cout << A[i] << " ";
    cout << endl;
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int A[],int l, int r){
    int i = l,j = r+1;
    int mid = A[l];
    while(i < j){
        i++;
        while(A[i] < mid && i <= r) i++;
        j--;
        while(A[j] > mid && j >= l) j--;
        swap(A[i],A[j]);
    }
    swap(A[i],A[j]);
    swap(A[j],A[l]);
    return j;
}

void quickSort(int A[],int l,int r){
    if (l < r){
        int temp = partition(A,l,r);
        if (l < temp) quickSort(A,l,temp-1);
        if (temp < r) quickSort(A,temp+1,r);
    }
}

int main(){
    int t,n,A[1000000];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> A[i];
        quickSort(A,1,n);
        xuat(A,n);
    }
    return 0;
}