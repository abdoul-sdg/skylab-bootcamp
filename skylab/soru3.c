/*
Skylab bootcamp 3. soru

Kullanıcıdan alınacak değerler ile oluşturulmuş
dizinin elemanlarının yerlerini ters bir şekilde
değiştirmeniz gerekmektedir. Bunu pointer
aracılığı ile yapınız

*/






#include <stdio.h>
#include <cs50.h>

void printArr(int *arr, int size);


int main()
{

    int size = get_int ("Enter the size of the array ");
    int arr[size];
    int *left = arr;
    int *right;





    right = &arr[size - 1];

    printf("Enter elements in array: ");
    while(left <= right)
    {
        scanf("%d", left++);
    }


    printf("\n Normal Array: ");
    printArr(arr, size);


    left = arr;

    while(left < right)
    {
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;

        left++;
        right--;
    }


    printf("\n reverse Array: ");
    printArr(arr, size);


    return 0;
}



void printArr(int * arr, int size)
{
    int * arrEnd = (arr + size - 1);

    while(arr <= arrEnd)
    {
        printf("%d, ", *arr);
        arr++;
    }
}