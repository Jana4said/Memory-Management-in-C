#include <stdio.h>
#include "camera.h"
#include "photo.h"
//int print_packed_bits(const unsigned char *packed_photo, int packed_size);

int main() {
    // Create your arrays here. Remember to use correct sizes as defined in camera.h
    // And to handle error states in here, as main() handles the control flow.

    
    unsigned char photo[MAX_PHOTO_SIZE];      //  ASCII format
    unsigned char packed_photo[PACKED_PHOTO_SIZE]; //packed photo
    int rows, cols;    
      // Loop to process each photo
    while (get_next_photo(photo, &rows, &cols) > 0) {
        // Print the ASCII photo
        print_ascii(photo, rows, cols);

        // Pack the bits
        int packed_size = pack_bits(packed_photo, photo, rows * cols);

        // Print the packed photo
         print_packed_bits(packed_photo, rows, cols);
    }

    return 0;
}