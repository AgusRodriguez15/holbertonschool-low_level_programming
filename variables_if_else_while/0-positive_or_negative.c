#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print agus
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	   if(n>0) {
                printf("is positive");
        }
        else {
                printf("is negative");
        }
        if (n==0){
                printf("is zero");
        }
        
	return (0);
}
