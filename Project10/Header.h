#pragma once
#include <iostream>
#include <string>

using namespace std;
class Car
{
	string marka;
	string model;
	string color;
	int year;
	int power;
	int speed;
public:
	Car(string, string, string, int, int, int);
	~Car();
};