#include<iostream>
using namespace std;

//��������������������ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

class Cube
{
public:	
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}
	//��ȡ�� 
	int getW()
	{
		return m_W;
	}
	//���ø� 
	void setH(int h)
	{
		m_H = h;
	}
	//��ȡ�� 
	int getH()
	{
		return m_H;
	}
	//����� 
	void Square()
	{
		cout << "����ǣ�" << 2*(m_L*m_W+m_L*m_H+m_W*m_H)<<endl;
	}	
	//����� 
	void Tiji()
	{
		cout << "����ǣ�" << m_L * m_W * m_H<< endl;
		 
	}
	//���ó�Ա�����ж������������Ƿ����
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
	//�����ڶ��������� 
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
		cout<<"c1,c2���"<<endl; 
	}
	else
	{
		cout<<"c1,c2�����"<<endl; 		
	}
	system("pause");
	
	return 0;
	
 } 
