#include<iostream>
using namespace std;

//对象的初始化和清理
//1.构造函数 进行初始化操作

class Person 
{
public:
	//1.1构造函数：
//	没有返回值不用谢void；
//	函数名 与类名相同 ； 
//	构造函数可以有参数，可以发生重载
//	创建对象的时候，构造函数会自动调用，只会调用一次
	Person()
	{
		cout <<"Person构造函数的调用"<<endl;
	 } 
	//2.析构函数 进行清理操作 
//	没有返回值 不写void
//	函数名和类名相同 在名称前面加一个~
//	析构函数不可以有参数，因此不可以发生重载
//	对象在销毁前 会自动调用析构函数，只会调用一次 
	~Person()
	{
		cout<< "Person析构函数的调用"<<endl;
	}
};



//构造和析构都是必须有的实现，如果不实现，编译器会自动生成一个空实现 
void test()
{
	Person p1;//在栈上的数据，test执行完后会释放对象 
}




int main()
{
	
	test();
//	Person p; //只有构造没有析构，因为程序没有结束 
	
//	system("pause");
	
	return 0;
 } 
