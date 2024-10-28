#include <stdio.h>

int main() {
    int c = 5, d = 3; // Binary: c = 0101, d = 0011

    printf("Bitwise Operators:\n");
    printf("c & d: %d\n", c & d); // Bitwise AND
    printf("c | d: %d\n", c | d); // Bitwise OR
    printf("c ^ d: %d\n", c ^ d); // Bitwise XOR
    printf("~c: %d\n", ~c);       // Bitwise NOT
    printf("c << 1: %d\n", c << 1); // Left shift
    printf("c >> 1: %d\n", c >> 1); // Right shift

    return 0;
}
