#include <stdio.h> // V - 12

double calc(double a, double b); // прототип ф-ии

int main () {
    double a, b;

    printf ("Введите 2 числа или символ для выхода: ");
    while (scanf ("%lf %lf", &a, &b) == 2) // при вводе 2х чисел 2 == 2 (истинно)
    {
        if (a + b == 0)
            printf ("Ошибка: сумма == нулю или деление на ноль \n");
        else
            printf ("Результат: %.4f\n", calc(a, b));

            printf ("Введите следующую пару чисел или символ для выхода: ");
    }
    return 0;
}

double calc(double a, double b)     // определение ф-ии
{
    double diff = a - b;

    if (diff < 0)
        diff = -diff;

    return diff / (a + b);

}
