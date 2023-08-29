#include<iostream>
using namespace std;

//函数占位参数
//语法：返回值类型 函数名（数据类型）{}
//例子
//占位参数 可以有默认参数
//void func(int a, int = 10)//第二个为占位参数
//void func(int a, int)//第二个为占位参数
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
//2.函数重载
//条件
//（1）同一个作用域
//（2）函数名称相同
//（3）函数参数类型不同，或者个数不同，或者顺序不同
//void func()
//{
//	cout<<"func调用"<<endl;
// }
//void func(int a)
//{
//	cout<<"func(int a)调用"<<endl;
// }
//void func(double a)
//{
//	cout<<"func(doubel a)调用"<<endl;
//}
//void func(int a,double b)
//{
//	cout<<"func(int a,double b)调用"<<endl;
//}
//
////注意：函数的返回值不可以作为函数重载的条件
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

//3.函数重载注意事项
//(1)引用作为重载条件

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
//(2)默认参数作为重载条件

void func2(int a,int b = 10)
{
	cout << "func2(int a, int b)的调用" << endl;
	
}
void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
	
}
int main()
{
	func2(10);//函数重载碰到默认参数，会出现歧义报错。 
	
	system("pause");
}

