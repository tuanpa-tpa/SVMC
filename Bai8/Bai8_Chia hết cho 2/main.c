//
//  main.c
//  Bai8_Chia hết cho 2
//
//  Created by PAT on 8/11/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int uocChia(unsigned long n){
    int d = 0;
    int i = 2;
    while(i <= sqrt(n)){
        if(n % i == 0){
            if (i % 2 == 0) d++;
            if (i != (n/i)){
                if (n/i % 2 == 0) d++;
            }
        }
        i++;
    }
    if (n %2 == 0) d++;
    return d;
}

int main(int argc, const char * argv[]) {
    int n;
    unsigned long arr[100];
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        scanf("%ld",&arr[i]);
    }
    for (int i = 1; i<= n; i++){
        printf("%d\n",uocChia(arr[i]));
    }
    return 0;
}


