#include<iostream>
using namespace std;

//���ã������������
//�﷨�� �������� &���� = ԭ��
//ע�����1.���ñ���Ҫ��ʼ��������ҪԤ���� 2.����һ����ʼ���������Ը���
 
//int main()
//{
//	int a = 10;
//	
//	int &b = a;
//	
//	cout << a << endl;
//	cout << b << endl;
//	
//	//a��b����ͬһ���ڴ� 
//	b = 20;
//	cout << a << endl;
//	cout << b << endl;
//	
// } 
 
//�÷���
//1.�������������� �ŵ㣺��ָ��
 
//int mySwap(int &a,int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
////	ֵ���ݣ��ββ�������ʵ��
////	��ַ���ݣ��βλ�����ʵ�� 
//	mySwap(a,b);//���ô��ݣ��βλ�����ʵ�� 
//	
//	cout << a << endl;
//	cout << b << endl;
//	
//	system("pause");
//}

////2.��������������ֵ
////(1)��Ҫ���ؾֲ����������� 
//int &test01()
//{
//	int a = 10;//�����ջ��
//	return a;
//}
//
////(2)�����ĵ��ÿ�����Ϊ��ֵ 
//int &test02()
//{
//	static int a = 10;//��̬�����������ȫ������ȫ���������ڳ��������ϵͳ�ͷ� 
//	return a;
//}
//int main()
//{
//	int &ref = test02();
////	int &ref = test01();
//	cout << ref << endl;
//	cout << ref << endl;//�ڶ��������Ѿ����ͷţ���Ϊ�ֲ�������ջ�� 
//	
//	test02() = 1000; 
//	cout << ref << endl;
//	cout << ref << endl;
//	system("pause"); 
// } 

//��������
//���� �������βΣ���ֹ�����

void showValue(const int &val)
{
	cout <<"val:"<< val<<endl;	
}
int main()
{
//	int a = 10;
//	//����const֮�󣬱������������޸�Ϊ int temp = 10; const int &ref = temp; 
//	const int & ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�.����const��Ϊֻ���������޸�
	int a = 100;
	showValue(a);
	cout <<"a:"<< a<<endl;
 } 
