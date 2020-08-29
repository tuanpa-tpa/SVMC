//
//  main.c
//  Số đầu tiên bị lặp
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long n,phanTu;
    long long array[100000];
    
    // nhap so lieu
    scanf("%lld",&n);
    for (long long i = 1; i<= n; i++){
        scanf("%lld",&phanTu);
        for (long long j = 0; j< phanTu; j++){
            scanf("%lld",&array[j]);
        }
        
        long long kt = 0;
        for (long long j = 0; j< phanTu; j++){
            long long t = 0;
            for (long long k = j+1; k < phanTu; k++){
                if (array[j] == array[k]){
                    t++;
                    if (t >= 1) {
                        kt = array[j];
                        break;
                    }
                }
            }
            if (kt) break;
        }
        if (kt) printf("%lld\n",kt);
        else printf("NO\n");
    }

    
    return 0;
}
