#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name; 
	//�Ա�
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ 
	string m_Addr;
 };
//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ�˵�����
	struct Person personArray[MAX]; 
	
	//ͨѶ¼�е�ǰ��¼��ϵ�˵ĸ���
	int m_Size; 
 };
 
// 1.�����ϵ��
void addPerson(Addressbooks * abs)
 {
 	//�ж�ͨѶ¼�Ƿ�����
	 if(abs->m_Size == MAX)
	 {
	 	cout<<"ͨѶ¼����"<<endl;
	 	return;
	  } 
	 else
	 {
	 	//����
		string name;
		cout <<"����������"<<endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		 
		//�Ա�
		cout <<"�������Ա�"<<endl;
		cout <<"1-----��"<<endl;
		cout <<"2-----Ů"<<endl;
		int sex = 0;
		while(true)
		{
			cin >> sex;
			if (sex==1 || sex==2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout<<"�����������������룡"<<endl;
			
		}

		//����
		cout <<"�������䣺"<<endl;
		int age=0;
		cin >> age;
		abs ->personArray[abs->m_Size].m_Age = age;
		 
		//�绰
		cout <<"����绰��"<<endl;
		string phone;
		cin >> phone;
		abs ->personArray[abs->m_Size].m_Phone = phone;
		//סַ 
		cout <<"�����ַ��"<<endl;
		string address;
		cin >> address;
		abs ->personArray[abs->m_Size].m_Addr = address;
		
		//����ͨѶ¼����
		abs->m_Size++;
		
		cout<<"��ӳɹ���"<<endl; 
		
		system("pause");//���������
		system("cls");//�������� 
	 }
  } 
// 2.��ʾ��ϵ��
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ0
	if(abs->m_Size ==0)
	{
		cout<<"��ǰ��¼Ϊ��"<<endl;
		
	}
	else
	{
		for(int i=0;i<abs->m_Size;i++)
		{
			cout<<"������"<<abs->personArray[i].m_Name <<"\t";
			cout<<"�Ա�"<<(abs->personArray[i].m_Sex ==1 ?"��":"Ů" )<<"\t";
			cout<<"���䣺"<<abs->personArray[i].m_Age <<"\t";
			cout<<"�绰��"<<abs->personArray[i].m_Phone <<"\t";
			cout<<"��ַ��"<<abs->personArray[i].m_Addr <<endl;
		}
	}
	
	system("pause");
	system("cls"); 
}

// 3. �ҵ���ϵ�� 
int isExist(Addressbooks * abs,string name)
{
	for(int i = 0; i < abs->m_Size;i++)
	{
		if(abs->personArray[i].m_Name==name)
		{
			return i;//���������������ı�� 
		}
		
	}
	return -1;
 } 
// 4. ɾ����ϵ��
void deletePerson(Addressbooks *abs) 
{
	cout <<"������Ҫɾ������ϵ��"<<endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);

	if(ret==-1)
	{
		cout<<"û������ˣ�"<<endl;
		system("pause");
	 	system("cls");
		return ;
	 } 
	 else
	 {
	 	//ɾ����ϵ�˲���
	 	for(int i = ret;i<abs->m_Size;i++)
		 {
		 	//����Ǩ��
			 abs->personArray[i] = abs->personArray[i+1];
		  } 
		abs->m_Size--; 
	 }
	 cout<<"ɾ���ɹ���"<<endl; 
	 system("pause");
	 system("cls");
}
// 5. ������ϵ��
void findPerson(Addressbooks *abs)
{
	cout<<"���������ϵ��������"<<endl;
	string name;
	cin>>name;
	int ret = isExist(abs,name);
	if(ret==-1)
	{
		cout<<"��ϵ�˲�����"<<endl;
	 } 
	else
	 {
	 	cout<<"��ϵ���ҵ��ˣ�"<<endl;
		cout<<"������"<<abs->personArray[ret].m_Name <<"\t";
		cout<<"�Ա�"<<(abs->personArray[ret].m_Sex ==1 ?"��":"Ů" )<<"\t";
		cout<<"���䣺"<<abs->personArray[ret].m_Age <<"\t";
		cout<<"�绰��"<<abs->personArray[ret].m_Phone <<"\t";
		cout<<"��ַ��"<<abs->personArray[ret].m_Addr <<endl;
	 }
	 system("pause");
	 system("cls");
 } 
// 6. �޸���ϵ��
void modifyPerson(Addressbooks *abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��������"<<endl;
	string name;
	cin >> name;
	int ret =  isExist(abs,name);
	if(ret!=-1)//�ҵ���ϵ�� 
	{
		//����
		string name;
		cout<<"��������"<<endl;
		cin>>name;
		abs->personArray[ret].m_Name = name;
		//�Ա� 
		int sex;
		cout<<"�����Ա�(1Ϊ��;2ΪŮ)"<<endl;
		while(true)
		{
			cin>>sex;
			if(sex==1||sex==2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout<<"���������Ա�"<<endl;
			
		}
		
		//����
		int age;
		cout<<"��������"<<endl;
		cin>>age;
		abs->personArray[ret].m_Age = age;
		//�绰 
		string phone;
		cout<<"����绰"<<endl;
		cin>>age;
		abs->personArray[ret].m_Phone = phone;
		//��ַ 
		string addr;
		cout<<"�����ַ"<<endl;
		cin>>addr;
		abs->personArray[ret].m_Addr = addr;
		cout<<"�޸ĳɹ���"<<endl; 
	}
	else
	{
		cout<<"���޴��ˣ�"<<endl; 
	}
	system("pause");
	system("cls");
}
// 7. �����ϵ��
void cleanPerson(Addressbooks *abs)
{
	//�߼����
	abs->m_Size = 0;
	cout<<"ͨѶ¼���"<<endl;
	system("pause");
	system("cls"); 
 } 
//��װ������ʾ����
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}

//���������� 
int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼��ǰ��Ա����
	abs.m_Size = 0; 
	int select = 0;//����һ���û�ѡ��������� 
	
	while (true) 
	{
	
		showMenu();
		
		cin >> select;
		
		switch(select)
		{
			case 1://1.�����ϵ��
				addPerson(&abs);//���õ�ַ���ݿ�������ʵ�� 
				break;
			case 2://2.��ʾ��ϵ��
				showPerson(&abs);
				break;
			case 3://3.ɾ����ϵ��
				deletePerson(&abs);
				break;
			case 4://4.������ϵ��
				findPerson(&abs);
				break;
			case 5://5.�޸���ϵ��
				modifyPerson(&abs);
				break;
			case 6://6.�����ϵ��
				cleanPerson(&abs);
				break; 
			case 0://0.�˳�ͨѶ¼
				cout<<"��ӭ�´�ʹ��"<<endl;
				system("pause");
				return 0; 
				break; 
		}
	}

	
	system("pause");
	return 0;
	
 } 
