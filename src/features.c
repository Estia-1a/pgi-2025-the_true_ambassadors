#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"
#include <stdlib.h>
#include <math.h>
/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

void helloWorld() {
    printf("Hello World !");
}



/*
void color_red(char *source_path){
    unsigned char *data = NULL;
    int width, height, channel_count;
    int result = read_data_image(source_path, &data, &width, &height, &channel_count);
    int new_result;
    if (result != 0) {
        if (data == NULL) {
            fprintf(stderr, "Error.\n");
            return;
        }

        for (int i = 0; i < width * height; i++) {
            int index = i * channel_count;  // index dans le tableau `data`

/
   new_result = write_data_image(source_path, &data, &width, &height, &channel_count);
            new_result->data[index + 1] = 0; // composant g
            new_result->data[index + 2] = 0; // composant b
                }
    


   
      free(data);
}
}
*/

         
/*


void color_red(char *source_path) {
    unsigned char *data = NULL;
    int width, height, channel_count;
    int result = read_data_image(source_path, &data, &width, &height, &channel_count);
    
    if (result != 0) {
        if (data == NULL) {
            fprintf(stderr, "Error.\n");
            return;
        }

        for (int i = 0; i < width * height; i++) {
            int index = i * channel_count;  // index dans le tableau `data`
            data[index + 1] = 0; // composant g
            data[index + 2] = 0; // composant b
        }

        int new_result = write_data_image("./images/input/image_out.bmp", data, width, height, channel_count);
        if (new_result == 0) {
            fprintf(stderr, "Error writing image.\n");
        }

        free(data);
    } else {
        fprintf(stderr, "Error reading image.\n");
    }
}



*/





void color_red(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {
        data[i + 1] = 0; // Mettre la composante verte à 0
        data[i + 2] = 0; // Mettre la composante bleue à 0
    }

    // Écrire les nouvelles données de l'image
    if (write_image_data("image_out.bmp", data, width, height) == 0) {
        fprintf(stderr, "Failed to write image data\n");
        free(data);

    }

    free(data);
  
}

void color_green(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {
        data[i] = 0; // Mettre la composante rouge à 0
        data[i + 2] = 0; // Mettre la composante bleue à 0
    }

    // Écrire les nouvelles données de l'image
    if (write_image_data("image_out.bmp", data, width, height) == 0) {
        fprintf(stderr, "Failed to write image data\n");
        free(data);

    }

    free(data);
  
}

void color_blue(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {
        data[i] = 0; // Mettre la composante rouge à 0
        data[i + 1] = 0; // Mettre la composante verte à 0
    }

    // Écrire les nouvelles données de l'image
    if (write_image_data("image_out.bmp", data, width, height) == 0) {
        fprintf(stderr, "Failed to write image data\n");
        free(data);

    }

    free(data);
  
}

void color_gray(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;
    unsigned char value;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {

        value = (data[i] + data[i+1] + data[i+2])/3;
        data[i] = value;
        data[i+1] = value;
        data[i+2] = value;
    }

    // Écrire les nouvelles données de l'image
    if (write_image_data("image_out.bmp", data, width, height) == 0) {
        fprintf(stderr, "Failed to write image data\n");
        free(data);

    }

    free(data);
  
}

void invert(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;
    int new_R, new_G, new_B;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {

  
        new_R = 255 - data[i];
        new_G = 255 - data[i+1];
        new_B = 255 - data[i+2];

        data[i] = new_R;
        data[i+1] = new_G;
        data[i+2] = new_B;
    }

    // Écrire les nouvelles données de l'image
    if (write_image_data("image_out.bmp", data, width, height) == 0) {
        fprintf(stderr, "Failed to write image data\n");
        free(data);

    }

    free(data);
  
}

void color_gray_luminance(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;
    unsigned char value;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {

        value = 0.21 * data[i] + 0.72 * data[i+1] + 0.07 * data[i+2];
        data[i] = value;
        data[i+1] = value;
        data[i+2] = value;
    }

    // Écrire les nouvelles données de l'image
    if (write_image_data("image_out.bmp", data, width, height) == 0) {
        fprintf(stderr, "Failed to write image data\n");
        free(data);

    }

    free(data);
  
}

void color_desaturate(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;
    unsigned char new_value;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {

        int min_value = fmin(fmin(data[i],data[i+1]),data[i+2]);
        int max_value = fmax(fmax(data[i],data[i+1]),data[i+2]);


        new_value = (min_value + max_value) / 2;
        data[i] = new_value;
        data[i+1] = new_value;
        data[i+2] = new_value;
    }

    // Écrire les nouvelles données de l'image
    if (write_image_data("image_out.bmp", data, width, height) == 0) {
        fprintf(stderr, "Failed to write image data\n");
        free(data);

    }

    free(data);
  
}



void max_pixel(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;
    int maximum;
    int maximum_R, maximum_G, maximum_B;
    int somme;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {

        maximum = data[i] + data[i+1] + data[i+2];
        maximum_R = data[i];
        maximum_G = data[i+1];
        maximum_B = data[i+2];

        somme = data[i] + data[i+1] + data[i+2];

        if(somme > maximum){
            maximum = somme;
            maximum_R = data[i];
            maximum_G = data[i+1];
            maximum_B = data[i+2];

        }

    }

    // Écrire les nouvelles données de l'image
    printf("R : %d, G : %d, B : %d",maximum_R,maximum_G,maximum_B);

    free(data);
  
}

void min_pixel(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;
    int minimum;
    int minimum_R, minimum_G, minimum_B;
    int somme;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {

        minimum = data[i] + data[i+1] + data[i+2];
        minimum_R = data[i];
        minimum_G = data[i+1];
        minimum_B = data[i+2];

        somme = data[i] + data[i+1] + data[i+2];

        if(somme < minimum){
            minimum = somme;
            minimum_R = data[i];
            minimum_G = data[i+1];
            minimum_B = data[i+2];

        }

    }

    // Écrire les nouvelles données de l'image
    printf("R : %d, G : %d, B : %d",minimum_R,minimum_G,minimum_B);

    free(data);
  
}

void max_pixel(char *source_path) {

const char *input_filename = source_path;
    unsigned char *data;
    int width, height, channel_count;
    int maximum;
    int maximum_R, maximum_G, maximum_B;
    int somme;

    // Lire les données de l'image
    if (read_image_data(input_filename, &data, &width, &height, &channel_count) == 0) {
        fprintf(stderr, "Failed to read image data\n");
        
    }

    // Transformer l'image pour ne garder que la composante rouge
    for (int i = 0; i < width * height * channel_count; i += channel_count) {

        maximum = data[i] + data[i+1] + data[i+2];
        maximum_R = data[i];
        maximum_G = data[i+1];
        maximum_B = data[i+2];

        somme = data[i] + data[i+1] + data[i+2];

        if(somme > maximum){
            maximum = somme;
            maximum_R = data[i];
            maximum_G = data[i+1];
            maximum_B = data[i+2];

        }

    }

    // Écrire les nouvelles données de l'image
    printf("R : %d, G : %d, B : %d",maximum_R,maximum_G,maximum_B);

    free(data);
  
}






    



    