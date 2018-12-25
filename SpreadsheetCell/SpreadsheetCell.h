#pragma once
#include<string>

class SpreadsheetCell {
public:
	SpreadsheetCell() = default;//任然保留编译器默认的构造函数
	SpreadsheetCell(double inValue);
	SpreadsheetCell(std::string str);
	void setValue(double inValue);
	double getValue() const;
	void setString(const std::string & inString);
	const std::string& getString() const;
private:
	std::string doubleToString(double inValue) const;
	double stringToDouble(const std::string& inString) const;
	double mValue;
	std::string mString;
};