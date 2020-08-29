//
//  main.c
//  Sắp xếp theo khoảng cách
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void swap(long long* a, long long* b){
    long long temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {
    long long n=0,mang[100000],data[100000],m = 0,x=0;
    scanf("%lld",&m);
    for (long long i = 1; i<= m; i++){
        // nhap so lieu
        scanf("%lld %lld",&n,&x);
        for (long long j = 0; j< n; j++){
            scanf("%lld",&mang[j]);
            data[j] = llabs(x - mang[j]);
        }

        // sap xep noi bot
        char check;
        for (long long i = 0; i < n ; i++ ){
            check = 0;
            for (long long j = 0; j < n - 1; j++) {
                if (data[j] > data[j+1]){
                    swap(&data[j],&data[j+1]);
                    swap(&mang[j],&mang[j+1]);
                    check = 1;
                }
            }
            if (check == 0) break;
        }
        
        for (long long j = 0; j< n; j++){
            printf("%lld ",mang[j]);
        }
        printf("\n");
    }
    return 0;
}
