#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <estia-image.h>
#include <getopt.h>

#include "features.h"
#include "utils.h"
#include "argsparse.h"

int main(int argc, char **argv) {
  /*To use debug mode: 
   - add --debug: freud.exe --debug -f images/input/image.jpeg
   or 
   - Simply run your compiled project with start button on the blue menu bar at the bottom of the VS Code window.
   */

  /*DO NOT EDIT THIS PART*/
  Config configuration ;
  parse_arguments( argc, argv, &configuration ) ;
  check_debug_mode(configuration);
  check_file();
  /* END */

  /* Use "if ( strncmp( command, <commandname>, 9 ) == 0 )" to check if your <commandname> is called by program.*/
  /* Example with helloworld command
   * If helloworld is a called command: freud.exe -f images/input/image.jpeg -c helloworld 
   */
  if ( strncmp( configuration.command, "helloworld", 10 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    helloWorld();
  }
  /*
   * TO COMPLETE
   */
   if ( strncmp( configuration.command, "color_red", 9 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_red("./images/input/image.jpeg");
  }

     if ( strncmp( configuration.command, "color_green", 11 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_green("./images/input/image.jpeg");
  }

    if ( strncmp( configuration.command, "color_blue", 10 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_green("./images/input/image.jpeg");
  }

      if ( strncmp( configuration.command, "color_blue", 10 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_blue("./images/input/image.jpeg");
  return 0;
}

      if ( strncmp( configuration.command, "color_gray", 10 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_gray("./images/input/image.jpeg");
  return 0;
}

    if ( strncmp( configuration.command, "invert", 6 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    invert("./images/input/image.jpeg");
  return 0;
}

  if ( strncmp( configuration.command, "color_gray_luminance", 20) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_gray_luminance("./images/input/image.jpeg");
  return 0;
}

 if ( strncmp( configuration.command, "color_desaturate", 16) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_desaturate("./images/input/image.jpeg");
  return 0;
}
}
