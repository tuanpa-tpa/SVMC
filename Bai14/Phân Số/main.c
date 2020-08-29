//
//  main.c
//  Phân Số
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
 
void check (long long a, long long b){
    if (a == 0 || b == 0)
        return;
    if (b % a == 0 && b >a){
        printf("1/%lld",b/a);
        return;
    }
    if (a % b == 0){
        return;
    }
    if (a > b)
    {
        printf("%lld",a/b);
        printf(" + ");
        check(a%b, b);
        return;
    }
    long long n = b/a +1;
    printf("1/%lld",n);
    printf(" + ");
    check(a*n-b, b*n);
}
 
int main() {
    int n;
    long long a,b;
    scanf("%d",&n);
    while(n--){
        long long a,b;
        scanf("%lld%lld", &a, &b);
        check(a,b);
        printf("\n");
    }
    return 0;
}
