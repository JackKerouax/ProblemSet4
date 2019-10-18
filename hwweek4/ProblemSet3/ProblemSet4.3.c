/* A C program that shows fgets example.

To compile and run this program, type:
gcc ProblemSet4.3.c -o ProblemSet4.3 && ./ProblemSet4.3
*/

#include <stdio.h>

int main() {

  // Openning file in C requires FILE type included in stdio.h
  FILE *fp;

  // Open text file as read mode
  fp = fopen("LoremIpsum.txt", "r");

  // Check to make sure file exists
  if(fp == NULL){
    printf("File cannot be opened or does not exist.\n");
    return 1; //Return error
  }

  char aschii[127]; //Use it to read characters in a file
  int i;

  for(i=0;i<127;i++){
    aschii[i] = 0;
   
  }

  int a;
        //Read and print charcters until EOF using fgets
        //fgets() automatically increments position in the file after reading a character
  while((a =fgetc(fp)) != EOF){

  aschii[a]++;
  }
  
  for(i=0;i<127;i++){
  printf("%c has %d times\n", i, aschii[i]);
}
  //Close opened file
  if(fp) fclose(fp);

  return 0;
}
