/* A solution for problemset

To compile and run this program, type:
gcc ProblemSet4.1.c -o ProblemSet4.1 && ./ProblemSet4.1
*/

/* ProblemSet4.1.c:21:1: warning: control reaches end of non-void 
function [-Wreturn-type]} */

#include <stdio.h>
#include <stdlib.h>


int a,i;
int f=0; // f is used to test if the arraycontain function is true or not.
    
int arrayContains(int a, int array[])
{
    for(i=0; i < 5; i++)
    {
        if(array[i]== a)
            f=1; 
    }       
} 
    

int main()
{
    int a;
    int numbers[5] = {2, 4, 6, 8, 10};
    
    printf("Enter the numbers(integer only!\n");
    scanf("%d", &a);

           arrayContains(a,numbers);
        if (f==1) printf("This integer is true\n");
             
        else printf("This integer is false\n");
           
return 0;
}
