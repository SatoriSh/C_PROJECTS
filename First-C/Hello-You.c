#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("\nHello, You\n");

    int number = 9263;
    short sh = 991;

    unsigned short unsSh = 35000; // only +

    float a = 3.40;
    float b = 3.6050;
    float c = a + b;

    int asdasdasdads = number ^ sh;

    printf("Number = %d\n", number);
    printf("unsigned short = %d\n", unsSh);
    printf("float: %4.3f\n", c);
    printf("%d\n", asdasdasdads);

    // XOR 
    int key = 987981;
    int data = 1488;

    int ecrypted = data ^ key;
    int decrypted = ecrypted ^ key;

    printf("Encryped: %d\n", ecrypted);
    printf("Decrypted: %d\n\n", decrypted);

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("\t%d", j * i);
        }
        printf("\n\n");
    }

    int numbers[3] = { 10,20,30 };
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        numbers[i] = i + 1;
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    printf("\n");

    int matrix[3][2];

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix[i][j] = ++count;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // int age;
    // printf("Input your age: \n/> ");
    // scanf("%d", &age);
    // printf("age = %d\n", age);

    // while (getchar() != '\n'); // очистка буффера

    // char name[10];
    // printf("Input your name: \n/> ");
    // scanf("%10[^\n]", name); // %10[^\n] — перестаем считывать символы только после \n
    // printf("name = %s\n", name);

    // & — получить адрес переменной
    // * — получить значение, которое лежит по адресу указателя
    // тип* — при объявлении указателя, это переменная-указатель хранящая адрес на тип

    int x = 10;
    int* px = &x;
    printf("x value = %d (*px)\nx address = %p ((void*)px)\n", *px, (void*)px);


    int y = *px;
    printf("\ny = %d (*px) in %p ((void*)px)\n", y, (void*)px);

    *px = 15;
    printf("\n*px = 15 -> x = %d in %p\n\n\n", x, (void*)px);


    int arr[3] = { 10,20,30 };

    int* parr = arr;
    printf("Arr[0] — %d\n", *parr);
    printf("Arr[1] — %d\n", *++parr);
    printf("Arr[2] — %d\n", *++parr);

    return 0;
}
