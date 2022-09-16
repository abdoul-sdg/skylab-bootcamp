/*
Skylab bootcamp 4. soru

Kullanıcının girdiği sayı adedi kadar fibonacci
dizisinden eleman çıktı olarak bastırılacaktır.
Bunu recursive fonksiyon aracılığıyla yapınız.

*/



#include <stdio.h>
#include <cs50.h>
int fibonacci(int n);



int main()
{

    int  m = 1, i;

    int value = get_int("Enter the number of elements ");


    for(i = 1; i <= value; i++)
    {
    printf("%i ", fibonacci(m));
    m++;
    }
    printf("\n");
}




int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }

    else
    {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}