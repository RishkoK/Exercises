#include <stdio.h>

int main() {
   int i;

   char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
   int int_array[5] = {1, 2, 3, 4, 5};

  long unsigned int hacky_nonpointer;

   hacky_nonpointer = (long unsigned int) char_array;

   for(i=0; i < 5; i++) { 
      printf("[hacky_nonpointer] points to %p, which contains the char %c\n",
            hacky_nonpointer, *((char *) hacky_nonpointer));
      hacky_nonpointer = hacky_nonpointer + sizeof(char);
   }

   hacky_nonpointer = (long unsigned int) int_array;

   for(i=0; i < 5; i++){ // hacky_nonpointer
      printf("[hacky_nonpointer] points to %p, which contains the integer %d\n",
            hacky_nonpointer, *((int *) hacky_nonpointer));
      hacky_nonpointer = hacky_nonpointer + sizeof(int);
   }
}
