#include "Header.h"
#if 0
You are a product managerand currently leading a team to develop a new product.
Unfortunately, the latest version of your product fails the quality check.
Since each version is developed based on the previous version, all the versions after a bad version are also bad.
Suppose you have n versions[1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which returns whether version is bad.Implement a function to find the first bad version.You should minimize the number of calls to the API.
#endif
bool isBadVersion(int version)
{
	if (version < 3) return false;
	else return true;
}
void findFirstBadVersion(int n, int begin, int end, int& bad_found)
{
    if (begin < 0) return;
    if (end > n - 1) return;
    if (begin > end) return;
    int mid = begin + (end - begin) / 2;
    if (isBadVersion(mid + 1)) {
        end = mid - 1;
        bad_found = mid;
    }
    else begin = mid + 1;
    findFirstBadVersion(n, begin, end, bad_found);
}
int firstBadVersion(int n) {
    int begin = 0;
    int end = n - 1;
    int bad_found = -1;
    findFirstBadVersion(n, begin, end, bad_found);
    return (bad_found + 1);

}