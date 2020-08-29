//
//  main.c
//  Bài4_Số tăng giảm
//
//  Created by PAT on 8/11/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct string {
    char so[600];
};

int main() {
    int n;
    char c;
    struct string arrayS[10000];
    scanf("%d",&n);
    c = getchar();
    for (int i = 1; i<=n; i++){
//        fgets(arrayS[i].so,sizeof(arrayS[i].so),stdin);
        scanf("%s",arrayS[i].so);
    }
    for (int i = 1; i<= n; i++){
        unsigned long t = 0;
        t = strlen(arrayS[i].so)-1;
        if (t == 1){
            printf("YES\n");
        } else {
            int kt1 = 1,kt2 = 1,kt3 = 0,kt4 = 0;
            for (int j = 0; j< t-1; j++){
                if (arrayS[i].so[j] <= arrayS[i].so[j+1]){
                    kt3 = 1;
                } else {
                    kt1 = 0;
                    break;
                }
            }
            for (int j = 0; j < t-1; j++){
                if (arrayS[i].so[j] >= arrayS[i].so[j+1]){
                    kt4 = 1;
                } else {
                    kt2 = 0;
                    break;
                }
            }
            if ( (kt1 || kt2) && (kt3 || kt4) ){
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
        
        
    }
    return 0;
}
