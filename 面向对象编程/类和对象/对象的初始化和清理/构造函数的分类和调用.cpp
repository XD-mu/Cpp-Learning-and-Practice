#include<iostream>
using namespace std;

class Person
{
	Person()//无参构造 
	{
		cout<<"Person构造函数调用"<<endl;
	}
	Person(int a)//有参构造 
	{
		cout<<"Person构造函数调用"<<endl;
	}
	~Person()//无参析构 
	{
		cout<<"Person析构函数调用"<<endl;
	}
	~Person(int a)//有参析构 
	{
		cout<<"Person析构函数调用"<<endl;
	}	
};




int main()
{
	
	
	
	system("pause");
	
	return 0;
}
