#include<iostream>
#include<string>
using namespace std;

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��
//������ʾѧ����������ѧ�� 

class Student
{
public:
	//����Ȩ��
	//(���е����Ժ���Ϊͳһ��Ϊ��Ա������Ҳ��Ϊ��Ա���ԡ���Ա����) 
	//��Ϊ ��Ա���� ��Ա���� 
	//���ԣ�
	string m_Name;
	int m_Id;
	
	//��Ϊ 
	//��ʾ������ѧ��
	void show_Student()
	{
		cout << "������"<< m_Name <<'\t'<< "ѧ�ţ�" << m_Id << endl;
	 } 
	
	//��������ֵ
	void setName(string name)
	{
		m_Name = name;
	 } 
	//��ѧ�Ÿ�ֵ
	void setId(int ID)
	{
		m_Id = ID;
	 } 
 }; 
 
int main()
{
	Student s1;
//	s1.m_Name = "����";
	s1.setName("����"); 
	s1.m_Id=24102;
	
	//չʾѧ����Ϣ 
	s1.show_Student();
}
