#include"SpreadsheetCell.h"
#include<iostream>
using namespace std;

int main()
{
	SpreadsheetCell myCell, anotherCell;//��ջ
	myCell.setValue(6.6);
	cout <<"��ջ��" << myCell.getString() << endl;

	SpreadsheetCell* myCellp = new SpreadsheetCell(1.24);//��
	cout << "��1��" << myCellp->getString() << endl;
	myCellp->setValue(3.24);
	cout << "��2��" << myCellp->getString() << endl;
	delete myCellp;
	myCellp = nullptr;

	//���캯����ʼ����
	SpreadsheetCell myCell3("111.22");
	cout << "string:" << myCell3.getString() << endl;
	cout << "double:" << myCell3.getValue() << endl;

	system("pause");
	return 0;
}