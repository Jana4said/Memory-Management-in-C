#include <stdio.h>
#include "camera.h"
#include "photo.h"

/* Your code for the function implementations in photo.h should be place here.*/
int print_ascii(const unsigned char *photo, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char pixel = photo[i * cols + j];
            printf("%c", (pixel == '1') ? '*' : '.');
        }
        printf("\n");
    }
}

// Function to pack bits from ASCII photo into compressed format
int pack_bits(unsigned char *dest,const unsigned char *src, int size) {
    int byte_idx = 0, bit_idx = 0;
    unsigned char packed_byte = 0;

    for (int i = 0; i < size; i++) {
        if (src[i] == '1') {
            packed_byte |= (1 << (7 - bit_idx)); // Set the corresponding bit
        }

        bit_idx++;

        // Once 8 bits are processed, store the byte
        if (bit_idx == 8) {
            dest[byte_idx++] = packed_byte;
            packed_byte = 0;
            bit_idx = 0;
        }
    }

    // If there are remaining bits, store the last byte
    if (bit_idx > 0) {
        dest[byte_idx] = packed_byte;
    }

    return byte_idx + 1; // Return the number of bytes used
}

// Function to print the packed bits
int print_packed_bits(const unsigned char photo[], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c", (photo[i * cols + j] & (1 << j)) ? '+' : '-');
        }
        printf("\n");
    }
    return 0;
}