#include"SpreadsheetCell.h"
#include<iostream>
#include<sstream>
using namespace std;

SpreadsheetCell::SpreadsheetCell(double inValue)
{
	setValue(inValue);
}
//构造函数初始化器
SpreadsheetCell::SpreadsheetCell(std::string str):
	mValue(stringToDouble(str)),mString(str)
{
	cout << "构造函数初始化器" << endl;
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
	ostringstream ostr;//字符串流
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