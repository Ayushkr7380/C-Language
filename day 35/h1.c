#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char num[20];
    int count = 0;
    char digits[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int newArr[100];
    
    scanf("%s",num);
    
    int len = strlen(num);
    
    for(int i=0;i<10;i++){
        count = 0;
        for(int j=0;j<len;j++){
            if(digits[i] == num[j]){
                count++;
            }
        }   
        newArr[i] = count;
    }
    int len1 = sizeof(newArr)/sizeof(newArr[0]);
    // printf("%d",len1); 
    for(int i = 0;i<10;i++)
        printf("%d ",newArr[i]);
    return 0;
}
