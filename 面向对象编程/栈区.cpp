#include<iostream>
using namespace std;

//栈区数据注意事项：不要返回局部变量地址
//例子

int* func(int b)
{
	b = 5;
	int a = 10; //局部变量，存放在栈区，栈区的数据在函数执行完后自动释放 
//	return &a; //返回局部变量的地址 
	return &b; //返回全局变量地址，数据不会丢失 
 } 
 
int main()
{
	//接受func函数的返回值
	int *p = func(1);
	
	cout << *p << endl; //第一次正确打印因为编译器做了保留 
	cout << *p << endl;//第二次数据不再保留  
	system("pause");
	
	return 0; 
}

