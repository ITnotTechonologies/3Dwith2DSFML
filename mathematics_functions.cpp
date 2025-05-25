#include <iostream>
#include <cmath>

#define Pi M_PI;

double get_angle(double x, double y) {
    double x_0 = std::abs(x);
    double tan_value = x_0 / y;
    double angle = atan(tan_value) * 180 / Pi;
    std::cout << angle << std::endl;
    if (x < 0) angle = 180.0 - angle;
    
    return angle;

}




int main() {
    double x, y;
    std::cin >> x >> y;
    std::cout << get_angle(x, y);
}