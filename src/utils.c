#include <estia-image.h>

#include "utils.h"

#include <stddef.h>

#include <stdio.h>


/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */



/*
pixelRGB get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y  ){

    


if( x > width || y > height || data == NULL){
    return NULL;
}

return (pixelRGB *) &data[read_image_data("/images/input/image.jpeg",x,y)] ;


void print_pixel( char *filename, int x, int y ){
    printf("R : %d, G : %d, B : %d",get_pixel.R,get_pixel.G,get_pixel.B); 
}

}

*/
pixelRGB *get_pixel(unsigned char* data, const unsigned int width, const unsigned int height,
                    const unsigned int n, const unsigned int x, const unsigned int y) {
    // Vérifications des préconditions
    if (x >= width || y >= height || data == NULL) {
        return NULL;
    }

    // Calcul de l'index de départ du pixel (chaîne RGB) dans le tableau brut
    int index = (y * width + x) * n;  // n = nombre de canaux (3 pour RGB, 4 pour RGBA, etc.)

    // Création d'une variable statique (ou dynamique si besoin) pour retourner son adresse
    static pixelRGB px; // statique car on retourne son adresse
    px.R = data[index];
    px.G = data[index + 1];
    px.B = data[index + 2];

    return &px;
}

void print_pixel(char *filename, int x, int y) {
    unsigned char *data;
    int width, height, channel_count;
    

    // Chargement de l'image
    if (!read_image_data(filename, &data, &width, &height, &channel_count)) {
        printf("Erreur lors du chargement de l'image.\n");
        return;
    }

    // Récupération du pixel à (x, y)
    pixelRGB *px = get_pixel(data, width, height, channel_count, x, y);
    if (px == NULL) {
        printf("Coordonnées invalides ou image non chargée.\n");
        return;
    }

    // Affichage dans le format demandé
    printf("print_pixel (%d, %d): %d, %d, %d\n", x, y, px->R, px->G, px->B);
}

