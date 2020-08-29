//
//  main.c
//  Nhầm số
//
//  Created by PAT on 8/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

void max(long long n,int* mang,int *size){
    while (n != 0){
        int temp = n%10;
        if (temp == 5) {
            temp = 6;
        }
        mang[*size] = temp;
        (*size)++;
        n /=10;
    }
}

void min(long long n,int* mang,int *size){
    while (n != 0){
        int temp = n%10;
        if (temp == 6) {
            temp = 5;
        }
        mang[*size] = temp;
        (*size)++;
        n /=10;
    }
}


int main(int argc, const char * argv[]) {
    long long a,b;
    int d1 = 0,d2 = 0,mang1[1000],mang2[1000];
    scanf("%lld %lld",&a,&b);
    
    long long t1= 0,t2 = 0;
    min(a, mang1,&d1);
    min(b, mang2,&d2);
    
    for (int i = d1-1; i>= 0; i--){
        t1 = t1*10 + mang1[i];
    }
    for (int i = d2-1; i>= 0; i--){
        t2 = t2*10 + mang2[i];
    }
    printf("%lld ",t1+t2);
    t1 = 0;t2 = 0;
    d1 = 0;d2 = 0;
    max(a,mang1,&d1);
    max(b,mang2,&d2);
    
    for (int i = d1-1; i>= 0; i--){
        t1 = t1*10 + mang1[i];
    }
    for (int i = d2-1; i>= 0; i--){
        t2 = t2*10 + mang2[i];
    }
    printf("%lld ",t1+t2);
    return 0;
}
