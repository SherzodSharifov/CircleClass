// Circle.cpp : Defines the entry point for the console application.
//
#include<iostream>
#include<iomanip>
#include "Circle.h"
const double PI = 3.14159;
Circle::Circle()
{
	radius = 0.0;
}
Circle::Circle(double r)
{
	radius = r;
}
double Circle::getRadius() const
{
	return radius;
}
double Circle::getDiameter() const
{
	return (2 * radius);
}
double Circle::getArea() const
{
	return (PI * getRadius() * getRadius());
}

double Circle::getCircumference() const
{
	return (PI * getDiameter());
}
void Circle::setRadius(double r)
{
	radius = r;
}
void Circle::displayCircleInfo(string circleName) const
{
	cout << setw(15) << left << (circleName + ": ");
	cout << "Radius -" << fixed << setprecision(2) << setw(8) << right << getRadius() << " ";
	cout << "Diameter -" << fixed << setprecision(2) << setw(8) << getDiameter() << endl;
	cout << setw(15) << " ";
	cout << "Area -" << fixed << setprecision(2) << setw(8) << getArea() << " ";
	cout << "Circumference -" << fixed << setprecision(2) << setw(8) << getCircumference() << endl;
	cout << endl;
}


