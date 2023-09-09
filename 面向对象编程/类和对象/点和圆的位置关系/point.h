#program once
#include <iostream>
using namespace std;

class Point
{
public:
//	设置x
	int setX(int x);
//	获取x
	int getX();

//	设置y
	int setY(int y);

//	获取x
	int getY();

private:
	int m_X;
	int m_Y;	
 };
