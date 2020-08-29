#include <iostream>
#include <cmath>
using namespace std;
int n,d = 0;
void tach(){
    for (int i = 2; i<= sqrt(n); i++){
      if(n % i == 0){
            if (i % 2 == 0) d++;
            if (i != (n/i)){
                if (n/i % 2 == 0) d++;
            }
        }
    }
    if (n % 2 == 0) d++;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        d = 0;
        tach();
        cout << d << endl;
    }
    
    return 0;
}