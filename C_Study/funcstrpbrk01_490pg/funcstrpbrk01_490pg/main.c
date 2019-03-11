//
//  main.c
//  funcstrpbrk01_490pg
//
//  Created by 이지수 on 08/02/2019.
//  Copyright © 2019 이지수. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char szBuffer[128] = {0};
    char szSet[128] = {0};
    char *pszStart = szBuffer;
    
    printf("Input String : ");
    fgets(szBuffer,128,stdin);
    
    printf("input character set  : ");
    fgets(szSet,128,stdin);
    szSet[strlen(szSet)-1] = '\0';
    
    while((pszStart = strpbrk(pszStart,szSet))!=NULL){
        printf("[%p] Index : %d , %c \n", pszStart , pszStart - szBuffer , *pszStart);
        pszStart++;
    }
    return 0;
}
