/*
*  Date		| Change
*-----------+------------------------------------
* 20181101	| ����д�� # 1 �� # 2

*/



#include<iostream>
#include<string>
#include<memory>
using namespace std;
typedef struct AA {
	int a;
	int b;
}A;

A* func(A &pb)
{
	
	A* pa = &pb;
	return pa;
}

class Employee
{
public:
	void set()
	{
		ma = 12;
		mb = 22;
	}
	int geta() {
		return ma;
	}
public:
	int ma;
	int mb;
};

int main()
{
	// # 1 ��ת���ַ���д��
	string str = R"(shfsdg \t 
	vsvskd aa\t)";
	cout << str << endl;

	// # 2
	A p;
	p.a = 12;
	p.b = 23;
	int x;
	x = func(p)->a;//��������ֵ
	cout << x << endl;

	// # 3
	//auto anEmployee = std::make_unique<Employee>;
	unique_ptr<Employee> anEmployee(new Employee);
	//anEmployee.set();
	cout << anEmployee->ma << endl;
	system("pause");
	return 0;
}