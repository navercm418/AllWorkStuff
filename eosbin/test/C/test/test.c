#include <stdio.h>

int main( int argc, char *argv[] )  {

   if( argc == 3 ) {
      printf("The argument supplied is:\n");
      printf("Arg1: %s\n", argv[1]);
      printf("Arg2: %s\n", argv[2]);
   }
   else if( argc > 3 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("Two arguments expected.\n");
   }
}
