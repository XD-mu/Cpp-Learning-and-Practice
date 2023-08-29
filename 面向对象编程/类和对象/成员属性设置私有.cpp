#include<iostream>
#include<string>
using namespace std;

//可以自己控制读写权限，对于写可以检测数据的有效性 
class Person
{
public:
	//写姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名 
	void getName()
	{
		cout<<m_Name<<endl;
	}
	//获取年龄
	void getAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout<<"年龄有误"<<endl;
			return;
		}
		else
			m_Age = age;
			cout << m_Age<<endl;
	 }
	//只写Lover
	void setLover(string lover)
	{
		m_Lover = lover;
	 } 
private:
	//姓名 (可读可写)
	string m_Name;
	//年龄 (只读)
	int m_Age;
	//Lover (只写)
	string m_Lover; 
};

int main()
{
	Person p;
	p.setName("张三狗");
	p.getName();
	p.getAge(194); 
	
	p.setLover("123abab");
	
	system("pause");
	
	return 0;
}

