#include <stdio.h>
int main() {
    char chArr[] = {'A', 'B', 'C'};
    int iArr[] = {10, 20, 30};
    float fArr[] = {10.0f, 20.0f, 30.0f};
    double dArr[] = {10.001, 20.001, 30.001};

    printf("%d\n", sizeof(chArr)); // 3
    printf("%d\n", sizeof(iArr));  // 12
    printf("%d\n", sizeof(fArr));  // 12 (assuming float = 4 bytes)
    printf("%d\n", sizeof(dArr));  // 24 (assuming double = 8 bytes)

    return 0;
}
