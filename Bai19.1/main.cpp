#include <iostream>
using namespace std;
struct toaDo{
    int x,y,z;
};
int main(){
    int t;
    toaDo A,B,C,D,T1,T2,T3,T4;
    cin >> t;
    while(t--){
        cin >> A.x >> A.y >> A.z;
        cin >> B.x >> B.y >> B.z;
        cin >> C.x >> C.y >> C.z;
        cin >> D.x >> D.y >> D.z;

        // [AB,AC].AD = 0
        // AB
        T1.x = B.x - A.x;
        T1.y = B.y - A.y;
        T1.z = B.z - A.z;
        // AC
        T2.x = C.x - A.x;
        T2.y = C.y - A.y;
        T2.z = C.z - A.z;
        // AD
        T3.x = D.x - A.x;
        T3.y = D.y - A.y;
        T3.z = D.z - A.z;
        // [AB,AC]
        T4.x = T1.y*T2.z-T1.z*T2.y;
        T4.y = T1.z*T2.x-T1.x*T2.z;
        T4.z = T1.x*T2.y-T1.y*T2.x;
        // [AB,AC].AD
        if (T4.x*T3.x + T4.y*T3.y + T4.z*T3.z == 0) cout << "YES";
        else cout << "NO";
    
        cout << endl;
    }
    return 0;
}