def find_smallest_number (numbers):
    smallest_number = numbers[0]
    index_smallest_number = 0
    for i in range (1, len(numbers)):
        if (numbers[i] < smallest_number):
            smallest_number = numbers[i]
            index_smallest_number = i
    return index_smallest_number

def selection_sort(numbers):
    sorted_numbers = []
    for i in range(len(numbers)):
        index_smallest_number = find_smallest_number(numbers)
        sorted_numbers.append(numbers.pop(index_smallest_number))
    return sorted_numbers

numbers = [2, -2, 10, 0]
print(selection_sort(numbers))