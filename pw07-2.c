// isalpha() входит в <ctype.h> и проверяет, является ли символ буквой алфавита
// isletter нет в <ctype.h>

#include <stdio.h> // V - 6
#include <ctype.h>

int main () {
    int ch;
    int sent = 0;
    int total = 0;

    while ((ch = getchar()) != EOF)
    {
        total++;

        if (ispunct(ch)) // берёт считанный символ и проверяет знак препинания это или нет
        {
            if (ch == '.' || ch == '!' || ch == '?')
                sent++;
        }
    }
    
    printf ("Кол-во предложений: %d\n", sent);
    printf ("Общее кол-во обработанных символов: %d\n", total);

    return 0;
}

