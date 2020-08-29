//
//  main.cpp
//  Bai33
//
//  Created by PAT on 8/18/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <iostream>
using namespace std;
int t,A[30],cot[30],xuoi[30],nguoc[30],X[30][30];
int m;
void in(){
    int t = 0;
    for(int i=1;i<=8;i++)
        t += X[i][A[i]];
    if (t > m) m = t;
}
void Try(int i){
    int j;
    for(j=1;j<=8;j++){
        if(!cot[j]&&!xuoi[i-j+8]&&!nguoc[i+j-1]){
            A[i]=j;
            cot[j]=1; xuoi[i-j+8]=1; nguoc[i+j-1]=1;
            if(i==8) in();
            else Try(i+1);
            cot[j]=0; xuoi[i-j+8]=0; nguoc[i+j-1]=0;
        }
    }
}

int main(){
    cin >> t;
    while (t--) {
        for (int i = 1; i<= 8; i++){
            for (int j = 1; j<= 8; j++){
                cin >> X[i][j];
            }
        }
        m = 0;
        Try(1);
        cout << m << endl;
    }
}
