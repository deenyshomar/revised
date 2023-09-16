#include <stdio.h>
/**
 * operators
 *
 **/

int main (void)
{
	int d = 2, s = 4, z = 6;

	printf(" d = %d\n s = %d\n z = %d\n", d, s, z);
	d += 2, s += 2, z += 2; // adds 2 to all!
	printf(" after the modification using '+=' operator(2 has been added to all!) \n");
	printf(" d = %d\n s = %d\n z = %d\n", d, s, z);


}
