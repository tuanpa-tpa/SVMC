//
//  main.c
//  bon diem tren mat phang
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,arr[10][10],toaDo[10][10],data[10000],d=0;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        for (int j = 1; j<= 4; j++){
            for (int k = 1; k<= 3; k++)
                scanf("%d",&arr[j][k]);
        }
        // vecto 1
        toaDo[1][1] = arr[2][1] - arr[1][1];
        toaDo[1][2] = arr[2][2] - arr[1][2];
        toaDo[1][3] = arr[2][3] - arr[1][3];

        
        // vecto 2
        toaDo[2][1] = arr[3][1] - arr[1][1];
        toaDo[2][2] = arr[3][2] - arr[1][2];
        toaDo[2][3] = arr[3][3] - arr[1][3];
        
        // vecto 3
        toaDo[3][1] = arr[4][1] - arr[1][1];
        toaDo[3][2] = arr[4][2] - arr[1][2];
        toaDo[3][3] = arr[4][3] - arr[1][3];
        
        // vecto
        toaDo[4][1] = toaDo[1][2]*toaDo[2][3] - toaDo[1][3]*toaDo[2][2];
        toaDo[4][2] = toaDo[1][3]*toaDo[2][1] - toaDo[1][1]*toaDo[2][3];
        toaDo[4][3] = toaDo[1][1]*toaDo[2][2] - toaDo[1][2]*toaDo[2][1];
        
        
        if ((toaDo[4][1]*toaDo[3][1] + toaDo[4][2]*toaDo[3][2] + toaDo[4][3]*toaDo[3][3]) == 0 ){
            data[d] = 1;
        } else {
            data[d] = 0;
        }
        d++;
    }
    
    for (int i = 0; i< d; i++){
        if (data[i] == 1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    
    return 0;
}
