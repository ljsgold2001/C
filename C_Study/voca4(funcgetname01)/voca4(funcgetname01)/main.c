#include <stdio.h>

void GetName(char *pszname , int nsize){ // *pszname 을 pszname[]이라고 써도 상관없다.
    printf("이름을 입력하세요 :");
    
    fgets(pszname, nsize, stdin);
}
int main(int argc, const char * argv[]) {
    
    char szName[32] = {0};
    
    GetName(szName, sizeof(szName));
    
    printf("당신의 이름은 %s 입니다.\n", szName);
    
    return 0;
    
}
