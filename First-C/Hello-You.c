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

    int numbers[3];
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        numbers[i] = i + 1;
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
