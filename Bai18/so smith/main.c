//
//  main.c
//  so smith
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

unsigned long tong(unsigned long n){
    unsigned long t = 0;
    while ( n != 0){
        t += n%10;
        n/=10;
    }
    return t;
}

int main(int argc, const char * argv[]) {
    unsigned long n,arr[1000];
    int data[1000],d = 0;
    scanf("%ld",&n);
    for (int i = 1; i<=n; i++){
        scanf("%ld",&arr[i]);
        int kt = 0;
        
        unsigned long tong1 = tong(arr[i]),tong2 = 0;
        unsigned long k = 2;
        while(arr[i] >= 2) {
            if ( arr[i] % k == 0 ) {
                tong2 += tong(k);
                arr[i] /= k;
            } else{
                k++;
            }
        }
        if (tong1 == tong2){
            kt = 1;
        } else {
            kt = 0;
        }
        data[d] = kt;
        d++;
    }
    for (int i = 0; i< d; i++){
        if (data[i] == 1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
