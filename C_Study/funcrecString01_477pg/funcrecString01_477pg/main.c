//
//  main.c
//  funcrecString01_477pg
//
//  Created by 이지수 on 01/02/2019.
//  Copyright © 2019 이지수. All rights reserved.
//

#include <stdio.h>

void PutData(char *pszParam){
    if(*pszParam =='\0'){
        return;
    }
    else{
       
       
        putchar(*pszParam);
        PutData(pszParam+1);
        
    }
}

int main(int argc, const char * argv[]) {
    PutData("hello world");
    putchar('\n');
    return 0;
}
