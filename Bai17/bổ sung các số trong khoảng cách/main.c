//
//  main.c
//  bổ sung các số trong khoảng cách
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b =t;
}

void sapxep(int n,int mang[]){
   char check;
      for (int i = 0; i < n ; i++ ){
          check = 0;
          for (int j = 0; j < n - 1; j++) {
              if (mang[j] > mang[j+1]){
                  swap(&mang[j],&mang[j+1]);
                  check = 1;
              }
          }
          if (check == 0) break;
      }
}

void check(int n,int mang[]){
    int d = 0;
    for (int j = 0 ; j< n-1; j++){
        if ((mang[j+1] - mang[j]) > 1){
            d += mang[j+1] - mang[j]-1;
        }
    }
    printf("%d\n",d);
}

int main(int argc, const char * argv[]) {
    int t,n,mang[1001];
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        for (int i = 0; i< n; i++){
            scanf("%d",&mang[i]);
        }
        sapxep(n, mang);
        check(n, mang);
    }
    
    return 0;
}
