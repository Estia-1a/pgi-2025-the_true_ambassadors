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
/*
int get_dimension() {
    

    *data = read_image_data("/images/input/image.jpeg");
    printf("W : %d, H : %d",data.width,data.height);

    
    return 0;
}

*/

/*



*/
void dimension(char *source_path) {
    int width, height, channel_count;
    unsigned char *data;

    if(read_image_data(source_path, &data, &width, &height, &channel_count) == 0){
        printf("dimension : %d, %d\n", width, height);
    } else {
        printf("Error reading image data.\n");
    }


}


/*

void dimension(char *source_path) {
     int width, height, channel_count;
     unsigned char *data;

     if (read_image_data(source_path, &data, &width, &height, &channel_count) == 0) {
         printf("dimension: %d, %d\n", width, height);
     } else {
         printf("Error reading image data.\n");
     }
 }
*/





