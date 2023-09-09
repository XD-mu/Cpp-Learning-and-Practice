#include<iostream>
#include<math.h>
#include "circle.h"
#include "point.h"
using namespace std;

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
