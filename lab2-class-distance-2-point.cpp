#include <iostream>
#include <cmath>
class DistancebwTwoPoints
{
public:
    void getCoordinates();
    double calculateDistance();

private:
    double x1_, y1_, x2_, y2_;

};

void DistancebwTwoPoints::getCoordinates()
{
    std::cout << "\nEnter the Cooridinates of Two points ";
    std::cout << "\nEnter X1 : ";
    std::cin >> x1_;
    std::cout << "\nEnter Y1 : ";
    std::cin >> y1_;
    std::cout << "\nEnter X2 : ";
    std::cin >> x2_;
    std::cout << "\nEnter Y2 : ";
    std::cin >> y2_;
}

double DistancebwTwoPoints::calculateDistance()
{
    return sqrt(pow(x2_ - x1_, 2) + pow(y2_ - y1_, 2));
}

int main()
{
    DistancebwTwoPoints d;
    d.getCoordinates();
    std::cout << "\nDistance between given two points is " << d.calculateDistance() << " units.";
}