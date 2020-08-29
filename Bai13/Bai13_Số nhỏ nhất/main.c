//
//  main.c
//  Bai13_Số nhỏ nhất
//
//  Created by PAT on 8/14/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t,s,d;
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d",&s,&d);
        if (s<1 || d<1 || s > d*9){
            printf("-1\n");
            continue;
        }
        int mang[1000] = {0},n = d-1;
        mang[0] = 1;
        s--;
        while (s > 8){
            mang[n] = 9;
            n--;
            s -= 9;
        }
        mang[n] += s;
        for (int i = 0; i< d; i++){
            printf("%d",mang[i]);
        }
        printf("\n");
    }
    return 0;
}
