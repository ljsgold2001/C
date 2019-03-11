#include <stdio.h>
int GetFactorial(int nParam){
    int nResult =0;
    if(nParam ==1){
        return 1;
    }
    else{
        nResult = nParam * GetFactorial(nParam -1);
        return nResult;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d",GetFactorial(5));
    return 0;
}
