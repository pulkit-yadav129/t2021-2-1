#include <iostream>

void generateSeries(int x) {
    for (int i = 1; i <= x; i++) {
        std::cout << i << " ";
        if (i % 2 != 0 && i != x) {
            std::cout << ", ";
        }
    }
    
    int nextOdd = x % 2 == 0 ? x + 1 : x + 2;
    while (nextOdd <= x) {
        std::cout << nextOdd;
        if (nextOdd + 2 <= x) {
            std::cout << ", ";
        }
        nextOdd += 2;
    }
}

int main() {
    int x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    
    generateSeries(x);
    
    return 0;
}
