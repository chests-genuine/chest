#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Function to calculate the volume of a torus
double calculateTorusVolume(double majorRadius, double minorRadius) {
    return 2.0 * PI * PI * std::pow(majorRadius, 2) * minorRadius;
}

int main() {
    double majorRadius, minorRadius;

    // Get the major and minor radii from the user
    std::cout << "Enter the major radius of the torus: ";
    std::cin >> majorRadius;

    std::cout << "Enter the minor radius of the torus: ";
    std::cin >> minorRadius;

    // Calculate and display the volume of the torus
    double torusVolume = calculateTorusVolume(majorRadius, minorRadius);

    std::cout << "Volume of the torus: " << torusVolume << std::endl;

    return 0;
}
