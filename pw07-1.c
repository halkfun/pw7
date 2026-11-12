#include <stdio.h>  // V - 19
#include <ctype.h> // библиотека  с функциями для классификации символов
int main () {

    int ch;

    while ((ch = getchar()) != EOF) 
    {
        if (isalpha(ch)) // является ли символ буквой латинского алфавита?
            putchar(ch);     // посимвольный вывод (противоположность getchar() )
    }

    return 0;
}