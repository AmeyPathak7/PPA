#include <stdio.h>

int main()
{
    int no = 11;   // Declare an integer variable
    int *p = &no;  // Declare a pointer to 'no'

    // Printing the value of 'no' directly and through pointer dereferencing
    printf("Value of no: %d\n", no);   // 11
    printf("Value through pointer *p: %d\n", *p);  // 11

    // Printing memory addresses (corrected format specifier)
    printf("Address of no: %p\n", (void*)&no);  // Address of no
    printf("Value of pointer p (address of no): %p\n", (void*)p);  // Address of no

    // Address of pointer 'p' itself (it is stored at another memory location)
    printf("Address of pointer p: %p\n", (void*)&p);  // Address of 'p' itself

    // Printing sizes of variables
    printf("Size of no: %lu bytes\n", sizeof(no));  // Typically 4 bytes
    printf("Size of pointer p: %lu bytes\n", sizeof(p));  // 4 bytes (32-bit) or 8 bytes (64-bit)
    printf("Size of *p (dereferenced value): %lu bytes\n", sizeof(*p));  // Same as int (typically 4 bytes)

    return 0;
}
