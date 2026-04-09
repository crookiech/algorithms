#include <vector>
#include <iostream>

std::vector<int> quick_sort (std::vector<int> numbers) {
    if (numbers.size() < 2) {
        return numbers;
    } else {
        int pivot = numbers[0];
        std::vector<int> less;
        std::vector<int> greater;
        for (int i = 1; i < numbers.size(); i++) {
            if (numbers[i] > pivot) {
                greater.push_back(numbers[i]);
            } else {
                less.push_back(numbers[i]);
            }
        }
        std::vector<int> sorted_less = quick_sort(less);
        std::vector<int> sorted_greater = quick_sort(greater);
        std::vector<int> result;
        result.insert(result.end(), sorted_less.begin(), sorted_less.end());
        result.push_back(pivot);
        result.insert(result.end(), sorted_greater.begin(), sorted_greater.end());
        return result;
    }
}

int main() {
    std::vector<int> numbers = {2, -2, 10, 0};
    std::vector<int> sorted_numbers = quick_sort(numbers);
    for (auto number : sorted_numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}