//
//  main.c
//  Bài2_Bắt đầu và kết thúc
//
//  Created by PAT on 8/11/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int check(unsigned long n);

int main(int argc, const char * argv[]) {
    unsigned long  n,arrA[200];
    scanf("%ld",&n);
    for (unsigned long i = 1; i <= n; i++){
        scanf("%ld",&arrA[i]);
    }
    for (unsigned long i = 1; i <= n; i++){
        if (check(arrA[i])){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

int check(unsigned long n){
    int array[10],d = 0;
    while (n != 0){
        array[d] = n % 10;
        d++;
        n /= 10;
    }
    if (array[0] == array[d-1]){
        return 1;
    } else {
        return 0;
    }
}
