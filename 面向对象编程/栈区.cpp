#include<iostream>
using namespace std;

//ջ������ע�������Ҫ���ؾֲ�������ַ
//����

int* func(int b)
{
	b = 5;
	int a = 10; //�ֲ������������ջ����ջ���������ں���ִ������Զ��ͷ� 
//	return &a; //���ؾֲ������ĵ�ַ 
	return &b; //����ȫ�ֱ�����ַ�����ݲ��ᶪʧ 
 } 
 
int main()
{
	//����func�����ķ���ֵ
	int *p = func(1);
	
	cout << *p << endl; //��һ����ȷ��ӡ��Ϊ���������˱��� 
	cout << *p << endl;//�ڶ������ݲ��ٱ���  
	system("pause");
	
	return 0; 
}

