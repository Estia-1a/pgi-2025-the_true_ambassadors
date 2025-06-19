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

        int new_result = write_data_image(source_path, data, width, height, channel_count);
        if (new_result == 0) {
            fprintf(stderr, "Error writing image.\n");
        }

        free(data);
    } else {
        fprintf(stderr, "Error reading image.\n");
    }
}
