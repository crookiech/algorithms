#include <vector>
#include <iostream>

int binary_search(int number, std::vector<int> numbers) {
    int low = 0;
    int high = numbers.size() - 1;
    int mid = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (numbers[mid] == number) {
            return mid;
        } else if (numbers[mid] > number) {
            high = mid - 1;
        } else if (numbers[mid] < number) {
            low = mid + 1;
        }
    }
    return -1;
}

int main () {
    std::vector<int> numbers = {-2, 0, 6, 10};
    int number = 6;
    std::cout << binary_search(number, numbers) << std::endl;
    return 0;
}