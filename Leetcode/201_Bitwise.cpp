#include "Header.h"

#if TEST201
int rangeBitwiseAnd(int left, int right) {
	
	int num = 0;
	while (left != right)
	{
		left = left >> 1;
		right = right >> 1;
		num++;
	}
	return left*pow(2, num);

}
#endif