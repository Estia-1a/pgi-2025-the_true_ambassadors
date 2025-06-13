#include <estia-image.h>
#include <stdio.h>

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


void max_pixel(char *source_path){
unsigned char *data = NULL;
    int width, height, channel_count;
    int sum_rgb;
    int result = read_image_data(source_path, &data, &width, &height, &channel_count);
    int maximum;
    int x_max, y_max;
    int max_r, max_g, max_b;
    if (result != 0) {
        if (data == NULL) {
            fprintf(stderr, "Error.\n");
            return;
        }
    }

    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++) {
            unsigned char r = data[i];
            unsigned char g = data[i+1];
            unsigned char b = data[i+2];
            sum_rgb = r + g + b;

            maximum = sum_rgb;

            if(sum_rgb > maximum){
                maximum = sum_rgb;
                
                max_r = r;
                max_g = g;
                max_b = b;
                x_max = x;
            } else {
                max_r = r;
                max_g = g;
                max_b = b;
                y_max = y;
            }

                
            

          
        }
    }

 printf("maximum(%d,%d) : %d, %d, %d",width,height,max_r,max_g,max_b);

    free(data);
}