#include"Spreadsheet.h"

Spreadsheet::Spreadsheet(int inWidth, int inHeight):
	mWidth(inWidth),mHeight(inHeight)
{
	mCells = new SpreadsheetCell* [mWidth];
	for (int i = 0; i < mWidth; i++)
	{
		mCells[i] = new SpreadsheetCell[mHeight];
	}
}
Spreadsheet::Spreadsheet(const Spreadsheet& src)
{
	copyFrom(src);
}

Spreadsheet& Spreadsheet::operator=(const Spreadsheet& rhs)
{
	//Check for self-assignment
	if (this == &rhs)
	{
		return *this;
	}
	//Free the old memory
	for (int i = 0; i < mWidth; i++)
	{
		delete[] mCells[i];
	}
	delete[] mCells;
	mCells = nullptr;

	//Copy the new memory.
	copyFrom(rhs);
	return *this;
}
void Spreadsheet::copyFrom(const Spreadsheet& src)
{
	mWidth = src.mWidth;
	mHeight = src.mHeight;
	mCells = new SpreadsheetCell*[mWidth];
	for (int i = 0; i < mWidth; i++)
	{
		mCells[i] = new SpreadsheetCell[mHeight];
	}
	for (int i = 0; i < mWidth; i++)
	{
		for (int j = 0; j < mHeight; j++)
		{
			mCells[i][j] = src.mCells[i][j];
		}
	}
}

Spreadsheet::~Spreadsheet()
{
	for (int i = 0; i < mWidth; i++)
	{
		delete[] mCells[i];
	}
	delete[] mCells;
	mCells = nullptr;
}

void Spreadsheet::setCellAt(int x, int y, const SpreadsheetCell& cell)
{
	if (!inRange(x, mWidth) || !inRange(y, mHeight))
	{
		throw std::out_of_range("");
	}
	mCells[x][y] = cell;
}
SpreadsheetCell& Spreadsheet::getCellAt(int x, int y)
{
	if (!inRange(x, mWidth) || !inRange(y, mHeight))
	{
		return mCells[x][y];
	}
}
bool Spreadsheet::inRange(int val, int upper)
{
	if (val < upper)
	{
		return true;
	}
	return false;
}