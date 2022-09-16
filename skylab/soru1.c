/*
Skylab bootcamp 1. soru

Kullanıcıdan iki farklı sayı değeri ve bir adet işlem için operatör
girilmesi istenecektir. Alınan değerler fonksiyon içerisine
parametre olarak gönderilecektir. İşlemin doğru sonucunu
verecek fonksiyon yazılmalıdır.
Fonksiyon prototipleri
void calculator(float ilk_deger,float ikinci_deger, char operator)

*/



#include <cs50.h>
#include <stdio.h>
#include <string.h>

void calcultor (float n1, char operator, float n2);

int main()
{

float first_number = get_float("Enter your first number ");
char operator = get_char("Enter your an operator ");
float second_number = get_float("Enter your second number ");


calcultor (first_number, operator, second_number);
}




void calcultor (float n1, char operator, float n2)
{

    switch (operator)
    {
        case '+':
        printf ("%f + %f = %f\n", n1, n2, (n1 + n2));
        break;

        case '-':
        printf ("%f - %f = %f\n", n1, n2, (n1 - n2));
        break;

        case '*':
        printf ("%f * %f = %f\n", n1, n2, (n1 * n2));
        break;


        case '/':
        printf ("%f / %f = %f\n", n1, n2, (n1 / n2));
        break;

        //case '%':
        //printf ("%f  %f = %f\n", n1, n2, (n1 % n2));
        //break;

        default:
            printf("Error! Incorrect operator.");
    }

}