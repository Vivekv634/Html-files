#include <stdio.h>

void main()
{
    char (alph);
    printf("Enter the value of alph: ");
    scanf("%c", &alph);
    switch (alph)
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
        printf("Non vowel");
        break;
    }
}
