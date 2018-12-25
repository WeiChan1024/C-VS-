#include"SpreadsheetCell.h"
#include<iostream>
#include<sstream>
using namespace std;

SpreadsheetCell::SpreadsheetCell(double inValue)
{
	setValue(inValue);
}
//���캯����ʼ����
SpreadsheetCell::SpreadsheetCell(std::string str):
	mValue(stringToDouble(str)),mString(str)
{
	cout << "���캯����ʼ����" << endl;
}
void SpreadsheetCell::setValue(double inValue)
{
	mValue = inValue;
	mString = doubleToString(mValue);
}
double SpreadsheetCell::getValue() const
{
	return mValue;
}
void SpreadsheetCell::setString(const std::string & inString)
{
	mString = inString;
	mString = stringToDouble(mString);
}
const string& SpreadsheetCell::getString() const
{
	return mString;
}

string SpreadsheetCell::doubleToString(double inValue) const
{
	ostringstream ostr;//�ַ�����
	ostr << inValue;
	return ostr.str();
}
double SpreadsheetCell::stringToDouble(const std::string& inString) const
{
	double temp;
	istringstream istr(inString);
	istr >> temp;
	if (istr.fail() || !istr.eof())
	{
		return 0;
	}
	return temp;
}