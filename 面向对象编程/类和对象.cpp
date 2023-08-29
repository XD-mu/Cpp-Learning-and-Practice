#include<iostream>
using namespace std;

const double PI = 3.1415926;

class Circle
{
	
	//访问权限
	
	//公共权限	
public:
	
	//属性
	//半径 
	int m_r;
	//行为 
	//获取圆的周长
	double calculateZC() 
	{
		return 2 * PI * m_r;
	}
};


int main()
{
	//通过圆类创建具体的圆（对象） 
	Circle cl;
	//给圆对象属性进行赋值 
	cl.m_r = 10;
	
	cout << "圆的周长：" << cl.calculateZC() << endl;
	
 } 

