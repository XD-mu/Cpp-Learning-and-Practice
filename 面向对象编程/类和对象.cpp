#include<iostream>
using namespace std;

const double PI = 3.1415926;

class Circle
{
	
	//����Ȩ��
	
	//����Ȩ��	
public:
	
	//����
	//�뾶 
	int m_r;
	//��Ϊ 
	//��ȡԲ���ܳ�
	double calculateZC() 
	{
		return 2 * PI * m_r;
	}
};


int main()
{
	//ͨ��Բ�ഴ�������Բ������ 
	Circle cl;
	//��Բ�������Խ��и�ֵ 
	cl.m_r = 10;
	
	cout << "Բ���ܳ���" << cl.calculateZC() << endl;
	
 } 

