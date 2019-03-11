//
//  main.c
//  funcstrcat04_487pg
//
//  Created by 이지수 on 08/02/2019.
//  Copyright © 2019 이지수. All rights reserved.
//

#include <stdio.h>

char* mystrcat(char* pszDst, char* pszSrc){
    while(*pszDst!='\0'){
        ++pszDst;
    }
    while(*pszSrc!='\0'){
    
        *pszDst = *pszSrc;
        *pszDst++;
        *pszSrc++;
        
    }
    *++pszDst = '\0';
    
    return --pszDst;
}

int main(int argc, const char * argv[]) {
    char szPath[128] = {0};
    char *pszEnd =NULL;
    
    pszEnd = mystrcat(szPath,"jisoo");
    pszEnd = mystrcat(szPath,"neun Sugang");
    pszEnd = mystrcat(szPath,"sinchungsunggong");
    
    puts(szPath);
    
    
    return 0;
}
