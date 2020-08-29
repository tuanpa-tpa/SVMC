//
//  main.c
//  sắp xếp xem kẽ
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>


void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {
    int n,mang[1000],m = 0;
    scanf("%d",&m);
    for (int i = 1; i<= m; i++){
        scanf("%d",&n);
        for (int i = 0; i< n; i++){
            scanf("%d",&mang[i]);
        }
        for (int i = 0; i < n -1; i++){
            int min = i;
            for (int j = i+1 ; j<n ;j++)
                if (mang[j] > mang[min]) {
                    min = j;
                }
            swap(&mang[min],&mang[i]);
        }
        if (n %2 == 0){
                   for (int i = 0; i < n/2 ; i++){
                       printf("%d %d ",mang[i],mang[n-i-1]);
                   }
               } else {
                   for (int i = 0; i < n/2 ; i++){
                       printf("%d %d ",mang[i],mang[n-i-1]);
                   }
                   printf("%d",mang[(n/2)]);
               }
        printf("\n");
    }
    
    return 0;
}
