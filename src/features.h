#ifndef FEATURES_H
#define FEATURES_H


void helloWorld();
void first_pixel();
void max_pixel(char *source_path);
void first_pixel(char *source_path);

void get_dimension();
void dimension();
void second_line(char *source_path);
void print_pixel(char *filename, int x, int y );
int read_image_data(const char *filename, unsigned char **data, int *width, int *height, int *channel_count);
#endif
