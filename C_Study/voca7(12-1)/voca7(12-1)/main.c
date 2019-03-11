#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char MyStrcpy(char *pszDst,int bsize,char *pszSrc){
    int i =0;
    while(pszSrc[i]!=NULL){
        pszDst[i] = pszSrc[i];
        i++;
    }
    
    return pszDst;
    
   
    
}


int main(int argc, const char * argv[]) {
    char szBufferSrc[12] ={"TestString"};
    char szBufferDst[12] ={"Abcssdfdafj"};
    
    MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
    
    puts(szBufferDst);
    return 0 ;
}
