#include<iostream>
using namespace std;

//求出立方体面积和体积，分别由全局函数和成员函数判断两个立方体是否相等

class Cube
{
public:	
	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}
	//设置宽
	void setW(int w)
	{
		m_W = w;
	}
	//获取宽 
	int getW()
	{
		return m_W;
	}
	//设置高 
	void setH(int h)
	{
		m_H = h;
	}
	//获取高 
	int getH()
	{
		return m_H;
	}
	//求面积 
	void Square()
	{
		cout << "面积是：" << 2*(m_L*m_W+m_L*m_H+m_W*m_H)<<endl;
	}	
	//求体积 
	void Tiji()
	{
		cout << "体积是：" << m_L * m_W * m_H<< endl;
		 
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if(m_H == c.getH()&&m_L ==c.getL()&&m_W ==c.getW())
		{
			return true;
		}
		return false;
	 } 
private:
	int m_L;
	int m_W;
	int m_H;
 };
 
bool isSame(Cube &c1, Cube &c2)
{
	if(c1.getH() == c2.getH()&&c1.getL()==c2.getL()&&c1.getW()==c2.getW())
	{
		return true;
	}
	
	return false;
 } 
 
int main()
{
	Cube c1;
	c1.setL(5);
	c1.setW(6);
	c1.setH(7);
	c1.Square();
	c1.Tiji();
	//创建第二个立方体 
	Cube c2;
	c1.setL(5);
	c1.setW(6);
	c1.setH(7);
	c1.Square();
	c1.Tiji();
	
	bool ret = c1.isSameByClass(c2);
//	bool ret = isSame(c1,c2);
	if(ret)
	{
		cout<<"c1,c2相等"<<endl; 
	}
	else
	{
		cout<<"c1,c2不相等"<<endl; 		
	}
	system("pause");
	
	return 0;
	
 } 
