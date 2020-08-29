#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> A(1005);
bool tang(int a,int b) {return (a > b);}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for (int i = 0; i< n; i++) cin >> A[i];
		sort(A.begin(),A.begin()+n,tang);
		int i = 0, j = n-1;
		while (i <= j){
			if (i != j)
				cout << A[i] << " "<< A[j] << " ";
			else cout << A[i] << " ";
			i++; j--;
		}
	}
	return 0;
}