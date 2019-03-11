
#include <stdio.h>


void InitList(int *pList, int nsize){
    int i =0;
    for( i =0; i<nsize; i++){
        printf("정수를 입력하세요");
        scanf("%d",&pList[i]);
    }
}

void SortList(int *pList, int nsize){
    int ntemp = 0;
    for ( int i =0; i<nsize; i++){
        for(int j =i+1; j<nsize; j++){
            if(pList[j]<pList[i]){
                ntemp =pList[j];
                pList[j] = pList[i];
                pList[i] = ntemp;
                
            }
        }
    }
}

void PrintList(int *pList, int nsize){
    for(int i =0; i<nsize; i++){
        printf("%d\t" , pList[i]);
        putchar('\n');
    }
}

int main(int argc, const char * argv[]) {
    int aList[5] ={0};
    
    InitList(aList ,5);
    SortList(aList,5);
    PrintList(aList,5);
}
