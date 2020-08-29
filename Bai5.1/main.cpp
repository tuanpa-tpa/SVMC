#include <iostream>
#include <string>
using namespace std;
struct mang{
    int a;
    int count;
} A[50005];
int temp,ix = 0;
bool kt(int temp){
    while (temp > 0){  
         int t = temp % 10;
        if (t == 1 || t == 4  || t == 6 || t == 8 || t == 9 || t == 0)
            return false;
        temp /=10;
    }
    return true;
}

void dem(){
    bool check = false;
    for (int i = 0; i < ix; i++){
        if (temp == A[i].a) {
            check = true;
            A[i].count++;
        }
    }
    if (!check){
        A[ix].a = temp;
        A[ix].count = 1;
        ix++;
    }
}
int main(){
    while(cin >> temp){
        if (kt(temp)){
            dem();
        }
    }
    for (int i = 0; i< ix; i++){
        cout << A[i].a << " " << A[i].count << endl;
    }
    return 0;
}