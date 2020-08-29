//
//  main.c
//  Bai11_Tong nho nhat
//
//  Created by PAT on 8/13/20.
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

int main(int argc, const char * argv[]) {
    int n,t,mang[21];
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        for (int i = 0; i< n; i++){
            scanf("%d",&mang[i]);
        }
        sapxep(n,mang);
        long long soDau = 0,soSau = 0;
        for (int i = 0; i< n; i++){
            if (i % 2 == 0){
                soDau = soDau*10 + mang[i];
            } else if (i%2 != 0){
                soSau = soSau*10 + mang[i];
            }
        }
        long long tong = soDau+soSau;
        printf("%lld\n",tong);
    }
    return 0;
}
