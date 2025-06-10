#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <estia-image.h>
#include <getopt.h>

#include "features.h"
#include "utils.h"
#include "argsparse.h"

 typedef struct {
    char command[64];
    char source_path[256];
  }
  Configuration;

int main(int argc, char *argv[]) {
  /*To use debug mode: 
   - add --debug: freud.exe --debug -f images/input/image.jpeg
   or 
   - Simply run your compiled project with start button on the blue menu bar at the bottom of the VS Code window.
   */

  /*DO NOT EDIT THIS PART*/
  //Config configuration ;
  //parse_arguments( argc, argv, &configuration ) ;
  //check_debug_mode(configuration);
//check_file();
  // END 

  // Use "if ( strncmp( command, <commandname>, 9 ) == 0 )" to check if your <commandname> is called by program.
  // Example with helloworld command:
  // If helloworld is a called command: freud.exe -f images/input/image.jpeg -c helloworld 
  // if ( strncmp( configuration.command, "helloworld", 10 ) == 0 ) {
  //   helloworld() function is defined in feature.h and implemented in feature.c
  //   //helloWorld();
  // }
  // TO COMPLETE
  
  //return 0;
  Configuration config;
  for (int i=1; i<argc; i++){
    if (strcmp(argv[i], "-c") == 0 && i+1 < argc){
      strncpy(config.command, argv[i+1], sizeof(config.command) - 1);
      i++;
    }else if (strcmp(argv[i], "-f") == 0 && i+1 < argc){
      strncpy(config.source_path, argv[i+1], sizeof(config.source_path)-1);
      i++;
    }
  }
  if (strncmp(config.command, "first_pixel", 11) == 0) {
    first_pixel(config.source_path);
  }else {
    printf("Invalide");
  }
  return 0;
}

 


