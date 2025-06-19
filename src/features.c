#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"
#include <stdlib.h>
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




    