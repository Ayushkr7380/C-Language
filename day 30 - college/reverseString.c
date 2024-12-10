#include <stdio.h>
int main() {
    char name[6];
    char reverseName[6];
    int length = 5; 

    printf("Enter your name  ");
    fgets(name,sizeof(name),stdin);
    
    for (int i = length - 1; i >= 0; i--) {
        int k = length - 1 - i;
        reverseName[k] = name[i];
    }
    reverseName[length] = '\0'; 

    printf("%s", reverseName);
    return 0;
}
