#include<iostream>
#include<string>
using namespace std;

////���ַ���Ȩ��
//����Ȩ�� public      ��Ա���ڿ��Է��ʣ�������Է��� 
//����Ȩ�� protected   ��Ա���ڿ��Է��ʣ����ⲻ�ɷ���  ���ӿ��Է��ʸ��׵ı������� 
//˽��Ȩ�� private     ��Ա���ڿ��Է��ʣ����ⲻ�ɷ���  ���Ӳ��ɷ��ʸ��׵�˽������

class Person
{
public:
	//����Ȩ��
	string m_Name; 
protected:
	//����Ȩ��
	string m_Car;
private:
	//˽��Ȩ��
	int m_Password;
	
	
public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	 } 
 }; 


int main()
{
	Person p1;
	p1.m_Name="����";
	
//	p1.m_Car="����"�� //����Ȩ��������������ʲ���
//	p1.m_Password=123; //˽��Ȩ��������������ʲ���
	
	system("pause");
	
	return 0; 
}
