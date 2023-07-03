#include <iostream>

void generateSeries(int x) {
    int num = 1;
    for (int i = 1; i <= x; i++) {
        std::cout << num << " ";
        num += 2;
    }
}

int main() {
    int x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    
    generateSeries(x);
    
    return 0;
}
