#include<iostream>
using namespace std;

////1.������������ 
//int *func()
//{
//	//��new�ؼ��֣����Խ����ݿ��ٵ�����
//	//ָ�뱾������ջ�ϵľֲ�������ָ�뱣��������Ƿ��ڶ��� 
//	int *p = new int(10);
//	return p;
//}
//
//int main()
//{
//	int *p = func();
//	
//	cout << *p << endl;
//	cout << *p << endl;
//	
//	//�ͷŶ������ݣ�ʹ�ùؼ��� delete
//	delete p; 
//	
//	cout << *p << endl;
//	cout << *p << endl;
//	
//	system("pause");
//	
//}

//2.������������

int test02()
{
	int *arr = new int[10];
	 
	for(int i = 0;i < 10; i++)
	{
		arr[i] = i+100;//��ֵ100~109 
	}
	
	for(int i =0;i < 10;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	//�ͷ����飺��[]�ſ���,��ʾ�����ݾͻᱻ�ڴ��ͷ� 
	delete[] arr;
	 
 } 
 
 
int main()
{
	test02();
}
