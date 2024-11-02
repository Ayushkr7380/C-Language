//Create a program that counts the number of vowels and consonants in a given sentence, using do-while for input until # is entered.
#include<stdio.h>
#include<ctype.h>
int main(){
    char sentence[3000];
    int vowel,consonant;

    do
    {    
        vowel = 0;
        consonant = 0;
        printf("Enter anything : ");
        fgets(sentence,sizeof(sentence),stdin);

        if(sentence[0] == '#'){
            break;
        }
        else{

            for(int i = 0 ; sentence[i] != '\0' ; i++){
                char ch = tolower(sentence[i]);
                if(ch >= 'a' && ch <= 'z'){
                    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                        vowel++;
                    }
                    else{
                        consonant++;
                    }
                }
            }

            printf("Total number of vowel in the sentence is : %d\n",vowel);
            printf("Total number of consonant in the sentence is : %d\n",consonant);
            }
    } while (1);
    return 0;
}