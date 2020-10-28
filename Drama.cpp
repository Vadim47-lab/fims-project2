// Drama.cpp -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Movies, a Drama is a specific type of Movie
//		that denotes movies of genre type Drama
// ----------------------------------------------------------------------------
#include "Drama.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������ �� ������ ���� �����
Drama::Drama()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������ �� ������ ���� �����
Drama::~Drama()
{
}

// setStock -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������� ����� ������������ ��� ��������� ����� ���������� ������� � ��������� ������ �� ������, � ����� ������� �������� false, ��� ������� ��� ����������
bool Drama::setStock(int stock)
{
	// ��������� �� ����� ���������� ������� � ��������� ������ �� ������
	this->stock = stock;
	// ������� �������� false, ��� ������� ��� ����������
	return false;
}

// setDirector ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������� ����� ������������ ��� ��������� �������� ������ � ������ �� ������ ��������, � ����� ������� �������� false, ��� ������� ��� ����������
bool Drama::setDirector(string director)
{
	// ��������� �� ����� ���������� ������� � ��������� ������ �� ������
	this->director = director;
	// ������� �������� false, ��� ������� ��� ����������
	return false;
}

// setTitle -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������� ����� ������������ ��� ��������� ������ � ������ �� ������ ���������� ������ � ������ �� ������ ��������, � ����� ������� �������� false, ��� ������� ��� ����������
bool Drama::setTitle(string title)
{
	// ��������� �� ����� ���������� ������� � ��������� ������ �� ������
	this->title = title;
	// ������� �������� false, ��� ������� ��� ����������
	return false;
}

// setYear -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������� ����� ������������ ��� ��������� ������ � ������ �� ������ ���������� ��� � ������ �� ������ ���, � ����� ������� �������� false, ��� ������� ��� ����������
bool Drama::setYear(string year)
{
	// ��������� �� ����� ���������� ������� � ��������� ������ �� ������
	this->year = year;
	// ������� �������� false, ��� ������� ��� ����������
	return false;
}

// getStock -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������������� ����� ������������ ��� ��������� ����� ���������� ������� � ��������� ������ �� ������
int Drama::getStock() const
{
	// ������� ��������, ��� ������� ��� ���������� � ��������� ������ ���������� ������� � ��������� ������ �� ������
	return this->stock;
}

// getDirector ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ��������� ����� ������������ ��� ��������� ����� ���������� ������� �������� � ��������� ������ �� ������ ��������
string Drama::getDirector() const
{
	// ������� ��������, ��� ������� ��� ���������� � ��������� ������ ���������� ������� � ��������� ������ �� ������
	return this->director;
}

// getTitle -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ��������� ����� ������������ ��� ��������� ����� ���������� ������� ������ � ��������� ������ �� ������ ������
string Drama::getTitle() const
{
	// ������� ��������, ��� ������� ��� ���������� � ��������� ������ ���������� ������� � ��������� ������ �� ������
	return this->title;
}

// getYear -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ��������� ����� ������������ ��� ��������� ������ � ������ �� ������ ���������� ��� � ������ �� ������ ���
string Drama::getYear() const
{
	// ������� ��������, ��� ������� ��� ���������� � ��������� ������ ���������� ������� � ��������� ������ �� ������
	return this->year;
}

// getLog ---------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ��������� ����� ������������ ��� �������� ������� ��������
string Drama::getLog() const
{
	// ������� ��������, ��� ������� ��� ����������
	return " ";
}

// getChar --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ���������� ����� ������������ ��� �������� �������� "D"
char Drama::getChar() const
{
	// ������� ��������, ��� ������� ��� ����������
	return 'D';
}

// operator== ------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������� ����� ������������ ��� �������� �������� ���������� �������� � �������
bool Drama::operator==(const Movie & rhs) const
{
	// ������� �������� ���������, ��� ������� ��� ����������
	return (director == rhs.getDirector()) &&
		(title == rhs.getTitle());
}


// operator!= -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������� ����� ������������ ��� ��������, ���������� rhs ������� ����� ������ �� ������ ������
bool Drama::operator!=(const Movie& rhs) const
{
	// ������� �������� ���������, ��� ������� ��� ����������
	return !(this == &rhs);
}

// operator> ------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������� ����� ������������ ��� �������� ���������� �������� � ���������� rhs, ������� ������� � ������� getDirector, � � ��������� ������ ����� ����� �� �������� ���������� ������ ����������� � ���������� rhs, ������� ������� �
// ������� getTitle, � ����� ������� �������� � ��� � ��� true
bool Drama::operator>(const Movie& rhs) const
{
	// ��������, ���� ���������� director ������ ���������� rhs � ���������� ��������� � ������ getDirecor()
	if (director > rhs.getDirector())
	{
		//���������� ������� �������� true, ��� ������� ��� ����������
		return true;
	}
	//�����
	else
	{
		// ���� ���������� title ������ ���������� rhs � ���������� ��������� � ������ getTitle()
		if (title > rhs.getTitle())
		{
			//���������� ������� �������� true, ��� ������� ��� ����������
			return true;
		}
	}
	// ������� �������� false, ��� ������� ��� ����������
	return false;
}

// operator< -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
// ������� ����� ������������ ��� 2 ��������. 1: ���� ����� ������� rhs ����� ��������� �� ���������� rhs, �� ���������� ������� �������� false, ��� ������� ��� ����������. 2: ���� ����� ������� rhs ������� ��������� �� ���������� rhs,
// �� ���������� ������� �������� false, ��� ������� ��� ����������. ������� �������� true, ��� ������� ��� ����������
bool Drama::operator<(const Movie & rhs) const
{
	// ���� ����� ���������� ������� ����� ��������� �� ����������, �� ���������� ������� �������� false, ��� ������� ��� ����������
	if (this == &rhs) return false;
	// ���� ����� ���������� ������� ������� ��������� �� ����������, �� ���������� ������� �������� false, ��� ������� ��� ����������
	if (this > &rhs) return false;
	// ������� �������� true, ��� ������� ��� ����������
	return true;
}
