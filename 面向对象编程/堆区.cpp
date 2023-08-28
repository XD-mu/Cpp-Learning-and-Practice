#include<iostream>
using namespace std;

////1.堆区开辟数据 
//int *func()
//{
//	//用new关键字，可以将数据开辟到堆区
//	//指针本质是在栈上的局部变量，指针保存的数据是放在堆区 
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
//	//释放堆区数据，使用关键字 delete
//	delete p; 
//	
//	cout << *p << endl;
//	cout << *p << endl;
//	
//	system("pause");
//	
//}

//2.堆区开辟数组

int test02()
{
	int *arr = new int[10];
	 
	for(int i = 0;i < 10; i++)
	{
		arr[i] = i+100;//赋值100~109 
	}
	
	for(int i =0;i < 10;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	//释放数组：加[]才可以,显示完数据就会被内存释放 
	delete[] arr;
	 
 } 
 
 
int main()
{
	test02();
}
