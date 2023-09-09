#program once
#include<iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
//	设置半径
	void setR(int r); 
//	获取半径
	int getR();
//	设置圆心
	void setCenter(Point center);
//	获取圆心 
	Point getCenter();
		
private:
	int m_R;//半径 
	//在类中 
	Point m_Center;	
 }; 
