#include<stdio.h>
int main(){
    int numArr[] = {11,11,11,12,12} , i , j , count = 0;
    int countedArr[] = {0,0,0,0,0};
    for(i=0;i<5;i++){
        count = 0;
        for(j=0;j<5;j++){
            if (numArr[i] == numArr[j])
            {
                count++;
                if(count > 1){
                    countedArr[j] = 1;
                }
            }
            

        }

        if(countedArr[i] == 0){
        printf("%d = %d\n",numArr[i],count);
        }
    }
    return 0;
}