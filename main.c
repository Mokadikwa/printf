#include "main.h"


int main()
{
    int count;

    printf("Test Case 1:\n");
    count = _printf("Hello, World!\n");
    printf("Number of characters printed: %d\n", count);

    printf("\nTest Case 2:\n");
    count = _printf("This is a test string.\n");
    printf("Number of characters printed: %d\n", count);

    printf("\nTest Case 3:\n");
    count = _printf("The character is: %c\n", 'A');
    printf("Number of characters printed: %d\n", count);

    printf("\nTest Case 4:\n");
    count = _printf("The string is: %s\n", "Test");
    printf("Number of characters printed: %d\n", count);

    printf("\nTest Case 5:\n");
    count = _printf("The percentage sign: %%\n");
    printf("Number of characters printed: %d\n", count);

    printf("\nTest Case 6:\n");
    count = _printf("The decimal number is: %d\n", 12345);
    printf("Number of characters printed: %d\n", count);

    printf("\nTest Case 7:\n");
    count = _printf("The decimal number is: %i\n", -6789);
    printf("Number of characters printed: %d\n", count);

    return 0;
}
