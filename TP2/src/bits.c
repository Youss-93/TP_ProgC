#include <stdio.h>
#include <limits.h>

int main(void)
{
    const unsigned int nombre_bits = sizeof(unsigned int) * CHAR_BIT;
    const unsigned int d = (1u << (nombre_bits - 4))
                         | (1u << (nombre_bits - 20));
    const unsigned int bit4 = (d >> (nombre_bits - 4)) & 1u;
    const unsigned int bit20 = (d >> (nombre_bits - 20)) & 1u;

    printf("%u\n", bit4 && bit20);
    return 0;
}