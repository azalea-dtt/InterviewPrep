#include "Header.h"

#if TEST1009
//The number of bits required to represent an integer n is ⌊log2n⌋ + 1
int bitwiseComplement(int n)
{
	int m = 0;
	int result = 0;
	if (n == 0) return 1;
	while (n > 0)
	{
		result += (1 - n & 0x01) * pow(2, m);
		m++;
		n = n >> 1;
	}
	return result;
}

#endif