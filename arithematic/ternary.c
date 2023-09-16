#include <stdio.h>

/**
 * expressions using ternary operators
 *
 **/

int main(void)
{
	int d = 11, s = 20;

	// if d is > 10, add 5 to s. otherwise, add 2 to d.
	s += d > 10? 5: 2; // this ternary operator is equavalent to:
	/**
	 * if (d > 10)
	 *     s += 5;
	 * else
	       d += 2;
	**/

	printf(" d = %d\n s = %d\n", d, s);
}
