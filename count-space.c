#include <stdio.h>
#include<ctype.h>

int main() {
    char str[100];
    int whitespaces = 0;
    int characters = 0;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i]; i++) {
        if (isspace(str[i])) {
            whitespaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isalpha(str[i])) {
            characters++;
            char c = tolower(str[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else {
            characters++;
        }
    }

    printf("Whitespaces in string: %d\n", whitespaces);
    printf("Characters in string: %d\n", characters);
    printf("Vowels in string: %d\n", vowels);
    printf("Consonants string: %d\n", consonants);
    printf("Digits in string: %d\n", digits);
    return 0;
}

