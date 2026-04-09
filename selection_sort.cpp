#include <vector>
#include <iostream>
#include <algorithm>

void selection_sort(std::vector<int> numbers) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        int index_smallest_number = i;
        for (int j = i + 1; j < numbers.size(); j++) {
            if (numbers[j] < numbers[index_smallest_number]) {
                index_smallest_number = j;
            }
        }
        if (index_smallest_number != i) {
            std::swap(numbers[i], numbers[index_smallest_number]);
        }
    }
}

int main() {
    std::vector<int> numbers = {2, -2, 10, 0};
    selection_sort(numbers);
    for (auto number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return 0;
}