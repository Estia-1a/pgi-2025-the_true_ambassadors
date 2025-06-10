#include <estia-image.h>

#include "utils.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */


pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y ){
    if(data == NULL || x >= width || y >= height){
        return NULL;
    }
    return (pixelRGB *)&data[(y * width + x) * n ];
}

void print_pixel(char *filename, int x, int y) {
    unsigned char *data;
    int width, height, channel_count;
    if(read_image_data(filename, &data, &width, &height, &channel_count) != 0 ){
        printf("Error reading image data\n");
        return;
    
    pixelRGB * pixel = get_pixel(data,width, height,channel_count, x, y);
    printf(" %d, %d, %c %c %c\n",x,y,pixel->R, pixel->G, pixel->B);
}else{
    printf("Pixel out of range or data is NULL\n");
}
free(data);
}

