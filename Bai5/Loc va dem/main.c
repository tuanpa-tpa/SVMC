//
//  main.c
//  Loc va dem
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
 
 
struct dataBase{
    int so;
    int dem;
};
struct dataBase DATA[1000];
int check(int n){
    while(n > 0){
        int t = n % 10;
        if (t == 1 || t == 4  || t == 6 || t == 8 || t == 9 || t == 0){
            return 0;
        }
        n/=10;
    }
    return 1;
}
 
int main() {
    int n;
    int d = 0;
    while(scanf("%d",&n) != -1){
        if(check(n)){
            int kt = 0;
            for (int i = 0; i < d ; i++){
                if (n == DATA[i].so){
                    kt = 1;
                    DATA[i].dem++;
                    break;
                }
            }
            if (kt == 0){
                DATA[d].so = n;
                DATA[d].dem = 1;
                d++;
            }
        }
    }
 
    for (int i = 0; i< d; i++){
        printf("%d %d\n",DATA[i].so,DATA[i].dem);
    }
    return 0;
}
