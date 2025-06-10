#include <estia-image.h>
#include <stdio.h>
#include <stdlib.h>

#include "features.h"
#include "utils.h"

/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

void helloWorld() {
    printf("Hello World !");
}

void first_pixel(char *source_path){
    unsigned char *data = NULL;
    int width, height, channel_count;
    int result = read_image_data(source_path, &data, &width, &height, &channel_count);
    if (result != 0) {
        if (data == NULL) {
            fprintf(stderr, "Error.\n");
            return;
        }
    }
    unsigned char r = data[0];
    unsigned char g = data [1];
    unsigned char b = data [2];

    printf("first_pixel: %d, %d, %d\n", r, g, b);
    free(data);
}
