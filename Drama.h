// Drama.h -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Movies, a Drama is a specific type of Movie
//		that denotes movies of genre type Drama ()
// ----------------------------------------------------------------------------
#ifndef DRAMA_H
#define DRAMA_H

#include "Movie.h"
// обЏ€вление класса 
class Drama : public Movie
{
public:
	//объ€вление и вызов методов
	Drama();
	~Drama();

	// —еттеры Ч это функции, которые позвол€ют присваивать значени€ закрытым переменным-членам класса.
	// объ€вление функций булевого типа и целочисленной переменной
	bool setStock(int stock);
	// объ€вление функций булевого типа
	bool setDirector(string director);
	bool setTitle(string title);
	bool setYear(string year);

	// √еттеры - это функции, которые возвращают значени€ закрытых переменных-членов класса
	// объ€вление функции целочисленного типа статичного вида
	int getStock() const;
	// объ€вление функций статичного вида
	string getDirector() const;
	string getTitle() const;
	string getYear() const;
	string getLog() const;
	
	// объ€вление функции символьного типа статичного вида
	char getChar() const;

	// перегрузка оператора - это всего лишь более удобный способ вызова функций
	// объ€вление функций статичного вида
	bool operator==(const Movie& rhs) const;
	bool operator!=(const Movie& rhs) const;

	// перегрузка оператора - это всего лишь более удобный способ вызова функций
	// объ€вление функций статичного вида
	bool operator>(const Movie& rhs) const;
	bool operator<(const Movie& rhs) const;
};

#endif