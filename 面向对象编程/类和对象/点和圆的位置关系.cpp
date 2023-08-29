#include<iostream>
#include<math.h>
using namespace std;
//点类
class Point
{
public:
//	设置x
	int setX(int x)
	{
		m_X = x;
	}
//	获取x
	int getX()
	{
		return m_X;
	}
//	设置y
	int setY(int y)
	{
		m_Y = y;
	}
//	获取x
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;	
 };
class Circle
{
public:
//	设置半径
	void setR(int r)
	{
		m_R = r;
	}
//	获取半径
	int getR()
	{
		return m_R;
	}
//	设置圆心
	void setCenter(Point center)
	{
		m_Center = center;
	 } 
//	获取圆心 
	Point getCenter()
	{
		return m_Center;
	}
	
	
private:
	int m_R;//半径 
	
	Point m_Center;
	
 }; 
//判断点和圆的关系
void isInCircle(Circle &c,Point &p)
{
	
	//计算两点之间距离的平方
	int distance= pow(c.getCenter().getX()-p.getX(),2)+pow(c.getCenter().getY()-p.getY(),2);
	//半径的平方
	int rDistance = pow(c.getR(),2);
	
	if (distance == rDistance)
	{
		cout<<"点在圆上"<<endl;
	}
	else if(distance >rDistance)
	{
		cout<<"点在圆外"<<endl; 
	 }
	else
	{
		cout<<"点在圆内"<<endl;
	 } 
 } 

int main()
{
	Point p1;
	p1.setX(2);
	p1.setY(0);
	
	Circle c1;
	c1.setR(2);
	Point p2;
	p2.setX(0);
	p2.setY(0);
	c1.setCenter(p2);
	
	
	isInCircle(c1,p1);
	
	system("pause");
	
	return 0;
}
