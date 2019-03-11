#include <string.h>
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int count = 0;
    int length = 0;
    printf ( "몇개의 문자열을 입력하실건가요?");
    scanf("%d",&count);
    
    char **ppszData = (char**)malloc(sizeof(char*)*count);
    
    printf("최대 몇글자를 저장하시겠습니까?");
    scnaf("%d",&length);
    
    for(int i =0 ; i<count ; i++){
        ppszData[i] = (char*)malloc(sizeof(char)*length+1);
    }
}
