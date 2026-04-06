def binary_search (number, numbers):
    low = 0
    high = len(numbers) - 1
    while (low <= high):
        mid = (low + high) // 2
        if (numbers[mid]  < number):
            low = mid + 1
        elif (numbers[mid] > number):
            high = mid - 1
        elif (numbers[mid] == number):
            return mid
    return None

numbers = [-2, 0, 6 ,10]
number = 6
print(binary_search(number, numbers))