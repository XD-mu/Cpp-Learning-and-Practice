#include<iostream>
using namespace std;

//����ռλ����
//�﷨������ֵ���� ���������������ͣ�{}
//����
//ռλ���� ������Ĭ�ϲ���
//void func(int a, int = 10)//�ڶ���Ϊռλ����
//void func(int a, int)//�ڶ���Ϊռλ����
//{
//	cout << "this is func" << endl;
// }
//
//int main()
//{
//
//	func(10,10);
//
//	system("pause");
//
//}

//******************************************************//
//2.��������
//����
//��1��ͬһ��������
//��2������������ͬ
//��3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//void func()
//{
//	cout<<"func����"<<endl;
// }
//void func(int a)
//{
//	cout<<"func(int a)����"<<endl;
// }
//void func(double a)
//{
//	cout<<"func(doubel a)����"<<endl;
//}
//void func(int a,double b)
//{
//	cout<<"func(int a,double b)����"<<endl;
//}
//
////ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
//int main()
//{
//	func();
//	func(3);
//	func(3.14);
//	func(2,3.14);
//
//	system("pause");
//}
//******************************************************//

//3.��������ע������
//(1)������Ϊ��������

//void func(int &a) {
//	cout << "func(int &a)" <<endl;
//}
//
//void func(const int &a) {
//	cout << "func(const int &a)" <<endl;
//}
//
//int main() {
//	int a = 10;
//	const int b = 10;
//
//	func(a);
//	func(b);
//	fun
//	system("pause");
//}
//(2)Ĭ�ϲ�����Ϊ��������

void func2(int a,int b = 10)
{
	cout << "func2(int a, int b)�ĵ���" << endl;
	
}
void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
	
}
int main()
{
	func2(10);//������������Ĭ�ϲ�������������屨�� 
	
	system("pause");
}

