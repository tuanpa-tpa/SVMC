//
//  main.c
//  phép cộng
//
//  Created by PAT on 8/12/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct string {
    char word[10];
    int check;
};

int main(int argc, const char * argv[]) {
    int n;
    struct string s[100];
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){
        while(getchar() != '\n');
        fgets(s[i].word,sizeof(s[i].word),stdin);
    }
    int arr[3];
    for (int i = 1; i<=n; i++) {
        int d = 0;
        char str[10];
        strcpy(str, s[i].word);
        unsigned long t = strlen(str);
        for (unsigned long j = 0; j< t;j++)
            if (isdigit(str[j])){
                arr[d] = str[j] - 48;
                d++;
            }
        arr[2] = str[t-1] - 48;
        if ((arr[0] + arr[1]) == arr[2]) {
            s[i].check = 1;
        } else s[i].check = 0;
    }
    for (int i = 1; i<=n; i++) {
        if (s[i].check) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
