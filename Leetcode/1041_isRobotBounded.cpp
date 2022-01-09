#include "Header.h"
#include <math.h>
#define M_PI 3.14159265358979323846
#if TEST1041
double toRadian(int theta)
{
	return double(theta) * M_PI / 180;
}
bool isRobotBounded(string instructions)
{
	int theta = 90; //north direction
	int posX = 0;
	int posY = 0;
	for (std::string::iterator itr = instructions.begin(); itr != instructions.end(); ++itr)
	{
		if (*itr == 'G')
		{
			posX = posX + cos(toRadian(theta));
			posY = posY + sin(toRadian(theta));
		}
		else if (*itr == 'L') {
			theta = theta + 90;
		}
		else {
			theta = theta - 90;
		}
	}
	theta = theta % 360;
	if (theta < 0)
		theta = theta + 360;
	cout << posX << "," << posY << "," << theta << endl;
	if ((posX == 0 && posY == 0) || (theta != 90.0))
		return true;
	return false;

}
#endif