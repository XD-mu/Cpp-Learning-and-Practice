#include<iostream>
#include<math.h>
#include "circle.h"
#include "point.h"
using namespace std;

void isInCircle(Circle &c,Point &p)
{
	
	//��������֮������ƽ��
	int distance= pow(c.getCenter().getX()-p.getX(),2)+pow(c.getCenter().getY()-p.getY(),2);
	//�뾶��ƽ��
	int rDistance = pow(c.getR(),2);
	
	if (distance == rDistance)
	{
		cout<<"����Բ��"<<endl;
	}
	else if(distance >rDistance)
	{
		cout<<"����Բ��"<<endl; 
	 }
	else
	{
		cout<<"����Բ��"<<endl;
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
