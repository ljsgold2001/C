

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, const char * argv[]) {
    //첫번째 문자열을 입력받고나서 동적할당을 받은뒤에  출력하는것
    char szBuffer[50] = {0};
    char * pszData;
    char * pszNewData;
    
    gets(szBuffer);
    pszData = (char *)malloc(strlen(szBuffer)+1);
    
    if(pszData ==NULL){
        printf("not invalid");
    }
    strcpy(pszData,szBuffer);
    puts(pszData);
    
    //두번째 문자열을 입력받고 동적할당받아보자
    gets(szBuffer);
    pszNewData = (char *)realloc(pszData,strlen(pszData)+strlen(szBuffer)+1);

    strcpy(pszNewData + strlen(pszNewData),szBuffer);
    puts(pszNewData);
   
}
    
   
    
    
    

