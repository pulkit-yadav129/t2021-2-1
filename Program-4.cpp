#include <iostream>
#include <map>
#include <vector>

std::map<int, int> countMultiples(const std::vector<int>& numbers) {
    std::map<int, int> counts;
    
    for (int num : numbers) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                counts[i]++;
            }
        }
    }
    
    return counts;
}

int main() {
    std::vector<int> numbers;
    int num;
    std::cout << "Enter numbers (separated by spaces, enter '0' to stop): ";
    
    while (std::cin >> num && num != 0) {
        numbers.push_back(num);
    }
    
    std::map<int, int> counts = countMultiples(numbers);
    
    for (const auto& pair : counts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    return 0;
}
