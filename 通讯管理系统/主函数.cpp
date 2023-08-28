#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
//设计联系人结构体
struct Person
{
	//姓名
	string m_Name; 
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址 
	string m_Addr;
 };
//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人的数组
	struct Person personArray[MAX]; 
	
	//通讯录中当前记录联系人的个数
	int m_Size; 
 };
 
// 1.添加联系人
void addPerson(Addressbooks * abs)
 {
 	//判断通讯录是否已满
	 if(abs->m_Size == MAX)
	 {
	 	cout<<"通讯录已满"<<endl;
	 	return;
	  } 
	 else
	 {
	 	//姓名
		string name;
		cout <<"输入姓名："<<endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		 
		//性别
		cout <<"请输入性别："<<endl;
		cout <<"1-----男"<<endl;
		cout <<"2-----女"<<endl;
		int sex = 0;
		while(true)
		{
			cin >> sex;
			if (sex==1 || sex==2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout<<"输入有误，请重新输入！"<<endl;
			
		}

		//年龄
		cout <<"输入年龄："<<endl;
		int age=0;
		cin >> age;
		abs ->personArray[abs->m_Size].m_Age = age;
		 
		//电话
		cout <<"输入电话："<<endl;
		string phone;
		cin >> phone;
		abs ->personArray[abs->m_Size].m_Phone = phone;
		//住址 
		cout <<"输入地址："<<endl;
		string address;
		cin >> address;
		abs ->personArray[abs->m_Size].m_Addr = address;
		
		//更新通讯录人数
		abs->m_Size++;
		
		cout<<"添加成功！"<<endl; 
		
		system("pause");//任意键继续
		system("cls");//清屏操作 
	 }
  } 
// 2.显示联系人
void showPerson(Addressbooks * abs)
{
	//判断通讯录人数是否为0
	if(abs->m_Size ==0)
	{
		cout<<"当前记录为空"<<endl;
		
	}
	else
	{
		for(int i=0;i<abs->m_Size;i++)
		{
			cout<<"姓名："<<abs->personArray[i].m_Name <<"\t";
			cout<<"性别："<<(abs->personArray[i].m_Sex ==1 ?"男":"女" )<<"\t";
			cout<<"年龄："<<abs->personArray[i].m_Age <<"\t";
			cout<<"电话："<<abs->personArray[i].m_Phone <<"\t";
			cout<<"地址："<<abs->personArray[i].m_Addr <<endl;
		}
	}
	
	system("pause");
	system("cls"); 
}

// 3. 找到联系人 
int isExist(Addressbooks * abs,string name)
{
	for(int i = 0; i < abs->m_Size;i++)
	{
		if(abs->personArray[i].m_Name==name)
		{
			return i;//返回这个人在数组的编号 
		}
		
	}
	return -1;
 } 
// 4. 删除联系人
void deletePerson(Addressbooks *abs) 
{
	cout <<"请输入要删除的联系人"<<endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);

	if(ret==-1)
	{
		cout<<"没有这个人！"<<endl;
		system("pause");
	 	system("cls");
		return ;
	 } 
	 else
	 {
	 	//删除联系人操作
	 	for(int i = ret;i<abs->m_Size;i++)
		 {
		 	//数据迁移
			 abs->personArray[i] = abs->personArray[i+1];
		  } 
		abs->m_Size--; 
	 }
	 cout<<"删除成功！"<<endl; 
	 system("pause");
	 system("cls");
}
// 5. 查找联系人
void findPerson(Addressbooks *abs)
{
	cout<<"输入查找联系人姓名："<<endl;
	string name;
	cin>>name;
	int ret = isExist(abs,name);
	if(ret==-1)
	{
		cout<<"联系人不存在"<<endl;
	 } 
	else
	 {
	 	cout<<"联系人找到了！"<<endl;
		cout<<"姓名："<<abs->personArray[ret].m_Name <<"\t";
		cout<<"性别："<<(abs->personArray[ret].m_Sex ==1 ?"男":"女" )<<"\t";
		cout<<"年龄："<<abs->personArray[ret].m_Age <<"\t";
		cout<<"电话："<<abs->personArray[ret].m_Phone <<"\t";
		cout<<"地址："<<abs->personArray[ret].m_Addr <<endl;
	 }
	 system("pause");
	 system("cls");
 } 
// 6. 修改联系人
void modifyPerson(Addressbooks *abs)
{
	cout << "请输入要修改的联系人姓名："<<endl;
	string name;
	cin >> name;
	int ret =  isExist(abs,name);
	if(ret!=-1)//找到联系人 
	{
		//姓名
		string name;
		cout<<"输入姓名"<<endl;
		cin>>name;
		abs->personArray[ret].m_Name = name;
		//性别 
		int sex;
		cout<<"输入性别(1为男;2为女)"<<endl;
		while(true)
		{
			cin>>sex;
			if(sex==1||sex==2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout<<"重新输入性别！"<<endl;
			
		}
		
		//年龄
		int age;
		cout<<"输入年龄"<<endl;
		cin>>age;
		abs->personArray[ret].m_Age = age;
		//电话 
		string phone;
		cout<<"输入电话"<<endl;
		cin>>age;
		abs->personArray[ret].m_Phone = phone;
		//地址 
		string addr;
		cout<<"输入地址"<<endl;
		cin>>addr;
		abs->personArray[ret].m_Addr = addr;
		cout<<"修改成功！"<<endl; 
	}
	else
	{
		cout<<"查无此人！"<<endl; 
	}
	system("pause");
	system("cls");
}
// 7. 清空联系人
void cleanPerson(Addressbooks *abs)
{
	//逻辑清空
	abs->m_Size = 0;
	cout<<"通讯录清空"<<endl;
	system("pause");
	system("cls"); 
 } 
//封装函数显示界面
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}

//主函数功能 
int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录当前人员个数
	abs.m_Size = 0; 
	int select = 0;//创建一个用户选择输入变量 
	
	while (true) 
	{
	
		showMenu();
		
		cin >> select;
		
		switch(select)
		{
			case 1://1.添加联系人
				addPerson(&abs);//利用地址传递可以修饰实参 
				break;
			case 2://2.显示联系人
				showPerson(&abs);
				break;
			case 3://3.删除联系人
				deletePerson(&abs);
				break;
			case 4://4.查找联系人
				findPerson(&abs);
				break;
			case 5://5.修改联系人
				modifyPerson(&abs);
				break;
			case 6://6.清空联系人
				cleanPerson(&abs);
				break; 
			case 0://0.退出通讯录
				cout<<"欢迎下次使用"<<endl;
				system("pause");
				return 0; 
				break; 
		}
	}

	
	system("pause");
	return 0;
	
 } 
