#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet)
{
    unsigned char tempo;
    unsigned char tempo2;
    int i;

    i = 0;
    tempo = 0;
    while (i < 8)
    {
        tempo2 = octet % 2;
        octet = octet / 2;
        tempo = (tempo * 2) + tempo2;
        i++;
    }
    return (tempo);
}

int main(void)
{
    return (0);
}
