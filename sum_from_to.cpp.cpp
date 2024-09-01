#include <iostream>

int sum_from_to(int first, int last) {
    int sum = 0;
    
    // Swap if the first is greater than the last to ensure the range is valid
    if (first > last) {
        std::swap(first, last);
    }

    // Calculate the sum of integers from first to last inclusive
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    
    return sum;
}

int main() {
    int first, last;
    
    std::cout << "Enter the first number: ";
    std::cin >> first;
    
    std::cout << "Enter the last number: ";
    std::cin >> last;

    int result = sum_from_to(first, last);
    std::cout << "The sum from " << first << " to " << last << " is: " << result << std::endl;

    return 0;
}

