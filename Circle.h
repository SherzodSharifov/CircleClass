#include<string>
using namespace std;
class Circle
{
public:
	Circle();
	Circle(double r);
	double getRadius() const;
	double getDiameter() const;
	double getArea() const;
	double getCircumference() const;
	void setRadius(double r);
	void displayCircleInfo(string) const;
private:
	double radius;
};
