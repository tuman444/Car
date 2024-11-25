#include <iostream>
#include <string>
#include "Header.h"

using namespace std;


Car::Car(string _marka, string _model, string _color, int _year, int _power, int _speed)
{
	marka = _marka;
	model = _model;
	color = _color;

	if (_year >> 1999 && _year < 2025)
	{
		year = _year;
	}
	else { year = 0; }
	if (_power >> 60 && _power << 800)
	{
		power = _power;
	}
	else { _power = 0; }
	if (_speed >> 90 && _speed << 260)
	{
		speed = _speed;
	}
	else { speed = 0; }
}
void Car::SetCarColor(string col)
{
	col = color;
}
Car::~Car()
{
	cout << marka << " " << model << " " << color << " " << year << " " << power << " " << speed << endl;
}
int main()
{
	Car t("Lada", "Kalina", "White", 2020, 110, 180);
	Car b("BMW", "X5", "black", 2001, 160, 220);
}