#include<iostream>
using namespace std;

//引用：给变量起别名
//语法： 数据类型 &别名 = 原名
//注意事项：1.引用必须要初始化，不需要预声明 2.引用一旦初始化，不可以更改
 
//int main()
//{
//	int a = 10;
//	
//	int &b = a;
//	
//	cout << a << endl;
//	cout << b << endl;
//	
//	//a与b操作同一块内存 
//	b = 20;
//	cout << a << endl;
//	cout << b << endl;
//	
// } 
 
//用法：
//1.引用做函数参数 优点：简化指针
 
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
////	值传递，形参不会修饰实参
////	地址传递，形参会修饰实参 
//	mySwap(a,b);//引用传递，形参会修饰实参 
//	
//	cout << a << endl;
//	cout << b << endl;
//	
//	system("pause");
//}

////2.引用做函数返回值
////(1)不要返回局部变量的引用 
//int &test01()
//{
//	int a = 10;//存放在栈区
//	return a;
//}
//
////(2)函数的调用可以作为左值 
//int &test02()
//{
//	static int a = 10;//静态变量，存放在全局区，全局区数据在程序结束后系统释放 
//	return a;
//}
//int main()
//{
//	int &ref = test02();
////	int &ref = test01();
//	cout << ref << endl;
//	cout << ref << endl;//第二次数据已经被释放，因为局部变量在栈区 
//	
//	test02() = 1000; 
//	cout << ref << endl;
//	cout << ref << endl;
//	system("pause"); 
// } 

//常量引用
//场景 ：修饰形参，防止误操作

void showValue(const int &val)
{
	cout <<"val:"<< val<<endl;	
}
int main()
{
//	int a = 10;
//	//加上const之后，编译器将代码修改为 int temp = 10; const int &ref = temp; 
//	const int & ref = 10;//引用必须引一块合法的内存空间.加入const变为只读，不可修改
	int a = 100;
	showValue(a);
	cout <<"a:"<< a<<endl;
 } 
