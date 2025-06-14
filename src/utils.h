#ifndef UTILS_H
#define UTILS_H

/**
 * @brief Here, you have to define pixelRGB struct and its functions:
 * - pixel* getPixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y );
 * - void setPixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y, pixelRGB* pixel);
 *
*/

#ifndef FEATURES_H
#define FEATURES_H

// Function declarations go here
void first_pixel(const char *source_path);

#endif // FEATURES_H

typedef struct _pixelRGB {
  
   unsigned char R ;
   unsigned char G;
   unsigned char B; 
} pixelRGB ;

pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y );
void print_pixel(char *filename, int x, int y);
int read_image_data(const char *filename, unsigned char **data, int *width, int *height, int *channel_count);


#endif
