#program once
#include <iostream>
using namespace std;

class Point
{
public:
//	����x
	int setX(int x);
//	��ȡx
	int getX();

//	����y
	int setY(int y);

//	��ȡx
	int getY();

private:
	int m_X;
	int m_Y;	
 };
