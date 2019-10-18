/* A solution for problemset

To compile and run this program, type:
gcc ProblemSet4.2.c -o ProblemSet4.2 && ./ProblemSet4.2
*/

#include <stdio.h>

// Declare a function through to let the compiler know
void removeLastCharacter(char*);

// Define the function so that we can call it
void removeLastCharacter(char* array) 
{
    int i = 0;
    while(array[i] != '\0')
    i++;
    array[i-1] = '\0';
}

int main() 
{
FILE *file;
  // Open text file in read mode
  file = fopen("Removechar.txt", "r");

  // Check to make sure file exists
  if(file == NULL)
  {
    printf("File can't be opened or does't exist.\n");
    return 1; //Return error
  }

  char arr[10];
  int c; 
  fgets(arr,10,file);
  removeLastCharacter(arr);

FILE *file1;
  file1 = fopen("Removedchar.txt", "w");
  fputs(arr, file1);
  //Close opened file
  if(file) fclose(file);
  if(file1) fclose(file1);
  
  return 0;
}