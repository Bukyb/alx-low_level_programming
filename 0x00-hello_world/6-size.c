#include <stdio.h>
/**
 * main - Entry
 * REturn: Always 0
 */
int main(void)
{
	char c;
	int i;
	long int I;
	long long int II;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(I));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(II));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
