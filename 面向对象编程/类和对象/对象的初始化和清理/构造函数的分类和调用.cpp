#include<iostream>
using namespace std;

class Person
{
	Person()//�޲ι��� 
	{
		cout<<"Person���캯������"<<endl;
	}
	Person(int a)//�вι��� 
	{
		cout<<"Person���캯������"<<endl;
	}
	~Person()//�޲����� 
	{
		cout<<"Person������������"<<endl;
	}
	~Person(int a)//�в����� 
	{
		cout<<"Person������������"<<endl;
	}	
};




int main()
{
	
	
	
	system("pause");
	
	return 0;
}
