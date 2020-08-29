//
//  main.c
//  chia tiền
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,arr[51],dem[51] = {0};
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        scanf("%d",&arr[i]);
    }
    int a = 1;
    for (int i = 1; i<=n; i++){
        a = arr[i] / 1000;
        dem[i] += a;
        arr[i] = arr[i] - 1000*a;
        a = arr[i] / 500;
        dem[i] += a;
        arr[i] = arr[i] - 500*a;
        a = arr[i] / 200;
        dem[i] += a;
        arr[i] = arr[i] - 200*a;
        a = arr[i] / 100;
        dem[i] += a;
        arr[i] = arr[i] - 100*a;
        a = arr[i] / 50;
        dem[i] += a;
        arr[i] = arr[i] - 50*a;
        a = arr[i] / 20;
        dem[i] += a;
        arr[i] = arr[i] - 20*a;
        a = arr[i] / 10;
        dem[i] += a;
        arr[i] = arr[i] - 10*a;
        a = arr[i] / 5;
        dem[i] += a;
        arr[i] = arr[i] - 5*a;
        a = arr[i] / 2;
        dem[i] += a;
        arr[i] = arr[i] - 2*a;
        a = arr[i] / 1;
        dem[i] += a;
        arr[i] = arr[i] - 1*a;
    }
    for (int i = 1; i<= n; i++){
        printf("%d\n",dem[i]);
    }
    return 0;
}
