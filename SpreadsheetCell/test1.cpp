#include"SpreadsheetCell.h"
#include<iostream>
using namespace std;

int main()
{
	SpreadsheetCell myCell, anotherCell;//¶ÑÕ»
	myCell.setValue(6.6);
	cout <<"¶ÑÕ»£º" << myCell.getString() << endl;

	SpreadsheetCell* myCellp = new SpreadsheetCell(1.24);//¶Ñ
	cout << "¶Ñ1£º" << myCellp->getString() << endl;
	myCellp->setValue(3.24);
	cout << "¶Ñ2£º" << myCellp->getString() << endl;
	delete myCellp;
	myCellp = nullptr;

	//¹¹Ôìº¯Êý³õÊ¼»¯Æ÷
	SpreadsheetCell myCell3("111.22");
	cout << "string:" << myCell3.getString() << endl;
	cout << "double:" << myCell3.getValue() << endl;

	system("pause");
	return 0;
}