//
//  main.c
//  Bai20_lấy cờ
//
//  Created by PAT on 8/14/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int c,m;
        scanf("%d%d", &c,&m);
        if( c % (m+1) == 0){
            printf("Second\n");
        }else {
            printf("First\n");
        }
    }
    return 0;
}
