#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"
#include "stdlib.h"

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
 
    
     //int x_max, y_max;
    int max_r, max_g, max_b;
     /*
     int nb_max;
    int i_max; jmax;
     */ 
    
  
    for(int i=0; i < width * height; i++){
        unsigned char r = data[i * channel_count + 0];
        unsigned char g = data[i * channel_count + 1];
        unsigned char b = data[i * channel_count + 2];

        sum_rgb = r + g + b;

        maximum = sum_rgb;

            if(sum_rgb > maximum){
                maximum = sum_rgb;
                
                max_r = r;
                max_g = g;
                max_b = b;
                

            }

     




    }
   
    if (result != 0) {
        if (data == NULL) {
            fprintf(stderr, "Error.\n");
            return;
        }
    }


/*
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
                

            }

            // Debug

            printf("valeur (%d, %d) : %d, %d, %d",i,j,r,g,b);

                    }
    }



*/

/*

        if(j == 0){
                    x_max = width / 3;
                    y_max = height / 
                } else if( j == 1) {
                    x_max = 2 * width / 3;
                } else {
                    x_max = 3 * width;
                }


            }
                
            }

            if(nb_max >= 2){

            }

*/
        

                
            

          


 printf("maximum(%d,%d) : %d, %d, %d",width,height,max_r,max_g,max_b);

    free(data);
}