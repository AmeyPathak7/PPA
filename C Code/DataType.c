#include <stdio.h>

int main()
{
    // Declaring variables of different data types
    char ch = 'M';       // Character variable
    int no = 11;         // Integer variable
    float marks = 59.33f; // Float variable
    double data = 90.334522; // Double variable

    // Printing values with correct format specifiers
    printf("Value of ch is : %c\n", ch);
    
    // Incorrect specifier in original code: %c was used instead of %d
    printf("Value of no is : %d\n", no); // %d is used for integers

    // Incorrect specifier in original code: %c was used instead of %f
    printf("Value of marks is : %.2f\n", marks); // %f is used for floats

    // Incorrect specifier in original code: %c was used instead of %lf
    printf("Value of data is : %.6lf\n", data); // %lf is used for doubles

    // Printing the size of each data type
    printf("Size of character is : %d bytes\n", (int)sizeof(ch));  // sizeof(char) is typically 1 byte
    printf("Size of integer is : %d bytes\n", (int)sizeof(no));   // sizeof(int) is typically 4 bytes
    printf("Size of float is : %d bytes\n", (int)sizeof(marks));  // sizeof(float) is typically 4 bytes
    printf("Size of double is : %d bytes\n", (int)sizeof(data));  // sizeof(double) is typically 8 bytes

    return 0;
}
