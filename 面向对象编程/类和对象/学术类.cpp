#include<iostream>
#include<string>
using namespace std;

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，
//可以显示学生的姓名和学号 

class Student
{
public:
	//公共权限
	//(类中的属性和行为统一成为成员，属性也称为成员属性、成员变量) 
	//行为 成员函数 成员方法 
	//属性：
	string m_Name;
	int m_Id;
	
	//行为 
	//显示姓名和学号
	void show_Student()
	{
		cout << "姓名："<< m_Name <<'\t'<< "学号：" << m_Id << endl;
	 } 
	
	//给姓名赋值
	void setName(string name)
	{
		m_Name = name;
	 } 
	//给学号赋值
	void setId(int ID)
	{
		m_Id = ID;
	 } 
 }; 
 
int main()
{
	Student s1;
//	s1.m_Name = "张三";
	s1.setName("张三"); 
	s1.m_Id=24102;
	
	//展示学生信息 
	s1.show_Student();
}
