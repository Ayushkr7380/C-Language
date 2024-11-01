//Write a program that categorizes a character as a vowel, consonant, digit, or special character.
#include<stdio.h>
char checkCharacter(char checkVal);
int main(){
    char checkVal,result;
    printf("Enter any charcter : ");
    scanf("%c",&checkVal);

    result = checkCharacter(checkVal);

    switch (result)
    {
    case 'V':
        printf("%c is a Vowel.",checkVal);
        break;
    case 'C':
        printf("%c is a Consonant.",checkVal);
        break;
    case 'N':
        printf("%c is a Number.",checkVal);
        break;
    case 'S':
        printf("%c is a Special Character.",checkVal);
        break;
    }
    return 0;
}

char checkCharacter(char checkVal){
    if(checkVal == 'a' || checkVal == 'e' || checkVal == 'i' || checkVal == 'o' || checkVal == 'u' || checkVal == 'A' || checkVal == 'E' || checkVal == 'I' || checkVal == 'O' || checkVal == 'U'){
        return 'V';
    }
    else if((checkVal >= 'a' && checkVal <= 'z') || (checkVal >= 'A' && checkVal <= 'Z')){
        return 'C';
    }
    else if(checkVal >= '0' && checkVal <= '9'){
        return 'N';
    }
    else{
        return 'S';
    }
}