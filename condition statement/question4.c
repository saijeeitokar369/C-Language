//Check whether a character is a vowel or consonant.

#include<stdio.h>
int main(){
    char character;
    printf("Enter a character:");
    scanf("%s",&character);

    switch (character)
    {
    case 'a':
       printf("vowel");
        break;
    case 'e':
       printf("vowel");
        break;
    case 'i':
       printf("vowel");
        break;
    case 'o':
       printf("vowel");
        break;
    case 'u':
       printf("vowel");
        break;
    default:
        printf("consonant");
    }
}