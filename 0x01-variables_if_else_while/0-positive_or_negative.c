#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    if (n==0){
        printf("%s is zero",n)
    }
    else if (n<0) {
        printf("%s is negative",n)
    }
    
   else if (n>0) {
        printf("%s is positive",n)
    }
	return (0);
}