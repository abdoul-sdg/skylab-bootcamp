/*
Skylab bootcamp 4. soru

Kullanıcı bir değer girecektir. Fibonacci sayı dizisinin ilk elemanından
başlanarak ekrana bastırılacaktır ve bastırılan sayı adedi kullanıcının
değerine ulaşınca bastırma işlemi son bulacaktır. Fonksiyon
kullanılarak yapılacaktır.

Örnek
Kullanıcının girdiği değer 5 olsun.
O zaman çıktı şu şekilde olacaktır: 1 1 2 3 5


*/



#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main()
{

    int value = get_int("Enter the number of elements ");
    int element1 = 0;
    int element2 = 1;
    printf("%i ", element2);


    for (int i = 1; i < value; i++)
    {

        int element3 = element1 + element2;
        printf("%i ", element3);

        element1 = element2;
        element2 = element3;
    }
    printf("\n");

}