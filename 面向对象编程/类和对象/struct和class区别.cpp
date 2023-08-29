#include<iostream>
using namespace std;

//区别：默认的访问权限不同
//struct:公有

struct C1
{
	int m_A;	
 }; 


//class：私有 

class C2
{
	int m_A;//默认权限是私有
	 
};



int main()
{
	
	C1 c1;
	c1.m_A = 100;
	
	C2 c2;
//	c2.m_A = 100;//错误，无法访问 
	
	
	system("pause");
	
 } 
