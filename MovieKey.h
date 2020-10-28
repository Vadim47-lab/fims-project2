#ifndef MOVIEKEY_H
#define MOVIEKEY_H
#include "Movie.h"
#include <string>
using namespace std;
// обЏ€вление класса 
class MovieKey
{
public:
	//объ€вление и вызов методов и переменных
	MovieKey();
	~MovieKey();
	void setTitle(string title);
	void setMovie(Movie*& movie);

	//обЏ€вление переменных статичными 
	//указание ссылки на объект
	Movie* getMovie() const;
	string getTitle() const;
	//обЏ€вление переменных статичными 
	bool operator==(const string rhs) const;
	//обЏ€вление метода целочисленным и статичным
	int hash() const;
	// обЏ€вление элемента, что он доступен только в функци€х-членах и друзь€х класса
private:
	//ќбъ€вление переменной строчного типа
	string title;
	//объ€вление ссылки на обЏект
	Movie* pMovie;
};

#endif