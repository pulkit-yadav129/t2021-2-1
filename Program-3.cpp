#include <iostream>

void generateSeries(int x) {
    for (int i = 1; i <= x; i++) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
}

int main() {
    int x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    
    generateSeries(x);
    
    return 0;
}
