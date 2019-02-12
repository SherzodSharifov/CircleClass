#include<iostream>
#include<iomanip>
#include "Circle.h"
int main()
{
	Circle circle01(1);
	Circle circle02(5.7);
	Circle circle03;
	Circle circle04;
	cout << endl;
	circle01.displayCircleInfo("circle01");
	circle02.displayCircleInfo("circle02");
	circle03.setRadius(9.75);
	circle03.displayCircleInfo("circle03");
	circle04 = circle02;
	circle04.displayCircleInfo("circle04");
	cout << endl << endl;
	return 0;
}
