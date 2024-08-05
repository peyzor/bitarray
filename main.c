#include <stdio.h>
#include <string.h>

unsigned char bitArray[4];

void setBit(int index, int value) {
    if (value) {
        bitArray[index / 8] |= (1 << (index % 8));
    } else {
        bitArray[index / 8] &= ~(1 << (index % 8));
    }
}

int getBit(int index) {
    return (bitArray[index / 8] >> (index % 8)) & 1;
}

int main() {
    memset(bitArray, 0, sizeof(bitArray));

    setBit(2, 1);
    setBit(30, 1);
    setBit(30, 0);

    printf("Bit 2 state: %d\n", getBit(2));
    printf("Bit 30 state: %d\n", getBit(30));
    printf("Bit 10 state: %d\n", getBit(10));
}
