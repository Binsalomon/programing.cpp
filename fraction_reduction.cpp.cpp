#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int reduce(int num, int denom) {
    int com_divisor = gcd(num, denom);
    return num / com_divisor;
}

int main() {
    int num, denom;

    std::cout << "Enter the numerator: ";
    std::cin >> num;
    std::cout << "Enter the denominator: ";
    std::cin >> denom;

    if (denom == 0) {
        std::cout << "Denominator cannot be zero." << std::endl;
    } else if (num == 0) {
        std::cout << "The fraction reduces to 0." << std::endl;
    } else if (num % denom == 0) {
        std::cout << "The fraction reduces to 1." << std::endl;
    } else {
        int reduced_num = reduce(num, denom);
        int reduced_denom = reduce(denom, denom); // Here it should have been 'denom' divided by the gcd
        std::cout << "The fraction reduces to: " << reduced_num << "/" << reduced_denom << std::endl;
    }

    return 0;
}

