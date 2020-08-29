//
//  main.c
//  ghep hinh
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void swap(long long *a, long long *b){
    long long temp = *a;
    *a = *b;
    *b = temp;
}

long long check(long long n){
    long long temp = sqrt(n);
    if (temp*temp == n){
        return temp;
    }
    temp++;
    if (temp*temp == n){
        return temp;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    long long n,a,b,c,d,e,f;
    scanf("%lld",&n);
    for (int i = 1; i<= n; i++){
        scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
        long long S = a*b + c*d + e*f;
        long long canh = check(S);
        if(canh == 0){
            printf("NO\n");
        } else {
            if (a > b) swap(&a, &b);
            if (c > d) swap(&c, &d);
            if (e > f) swap(&e, &f);
            if (b == d && d == f && f == canh){
                printf("YES\n");
            } else {
                if (d == canh){
                    swap(&a, &c);
                    swap(&b, &d);
                }
                if (f == canh){
                    swap(&a, &e);
                    swap(&b, &f);
                }
                if (b == canh){
                    a = canh - a;
                    if ( (a == c && a == e) || (a == c && a == f) || (a == d && a == e) || (a == d && a == f) ){
                        printf("YES\n");
                    } else {
                        printf("NO\n");
                    }
                    
                } else {
                    printf("NO\n");
                }
                
            }
        }
    }
    return 0;
}
