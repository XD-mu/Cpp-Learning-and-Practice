#include<iostream>
#include<string>
using namespace std;

//�����Լ����ƶ�дȨ�ޣ�����д���Լ�����ݵ���Ч�� 
class Person
{
public:
	//д����
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ���� 
	void getName()
	{
		cout<<m_Name<<endl;
	}
	//��ȡ����
	void getAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout<<"��������"<<endl;
			return;
		}
		else
			m_Age = age;
			cout << m_Age<<endl;
	 }
	//ֻдLover
	void setLover(string lover)
	{
		m_Lover = lover;
	 } 
private:
	//���� (�ɶ���д)
	string m_Name;
	//���� (ֻ��)
	int m_Age;
	//Lover (ֻд)
	string m_Lover; 
};

int main()
{
	Person p;
	p.setName("������");
	p.getName();
	p.getAge(194); 
	
	p.setLover("123abab");
	
	system("pause");
	
	return 0;
}

