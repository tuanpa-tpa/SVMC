//
//  main.c
//  Ước chung lớn nhất và bội chung nhỏ nhất
//
//  Created by PAT on 8/11/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

unsigned long check(unsigned long int a,unsigned long int b);

int main(int argc, const char * argv[]) {
    unsigned long  n,arrA[200],arrB[200];
    scanf("%ld",&n);
    for (unsigned long i = 1; i <= n; i++){
        scanf("%ld %ld",&arrA[i],&arrB[i]);
    }
    for (unsigned long i = 1; i <= n; i++){
        unsigned long  temp = check(arrA[i], arrB[i]);
        printf("%ld %ld\n",temp,arrA[i]*arrB[i]/temp);
    }
    return 0;
}

unsigned long check(unsigned long a,unsigned long b){
    unsigned long temp;
    if ( b > a) {
        unsigned long t = a;
        a = b;
        b = t;
    }
    while (b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
