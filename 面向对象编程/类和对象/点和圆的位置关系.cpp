#include<iostream>
#include<math.h>
using namespace std;
//����
class Point
{
public:
//	����x
	int setX(int x)
	{
		m_X = x;
	}
//	��ȡx
	int getX()
	{
		return m_X;
	}
//	����y
	int setY(int y)
	{
		m_Y = y;
	}
//	��ȡx
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
//	���ð뾶
	void setR(int r)
	{
		m_R = r;
	}
//	��ȡ�뾶
	int getR()
	{
		return m_R;
	}
//	����Բ��
	void setCenter(Point center)
	{
		m_Center = center;
	 } 
//	��ȡԲ�� 
	Point getCenter()
	{
		return m_Center;
	}
	
	
private:
	int m_R;//�뾶 
	
	Point m_Center;
	
 }; 
//�жϵ��Բ�Ĺ�ϵ
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
