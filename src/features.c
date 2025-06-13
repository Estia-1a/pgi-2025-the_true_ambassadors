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

void print_pixel(char *source_path, int x, int y ){
    unsigned char *data = NULL;
    int width, height, channel_count;
    int result = read_image_data(char *source_path, &data, &width, &height, &channel_count);

    int ligne = x * 3;
    int colonne = channel_count / 3;

    int coordonnee = ligne + colonne;

    unsigned char r = data[coordonnee];
    unsigned char g = data[coordonnee];
    unsigned char b = data[coordonnee];


    printf("print_pixel: %d, %d, %d\n,(x, y)", r, g, b);
    free(data);
}