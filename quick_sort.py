def quick_sort (numbers):
    if (len(numbers) < 2):
        return numbers
    else:
        pivot = numbers[0]
        less = [number for number in numbers[1::] if number < pivot]
        greater = [number for number in numbers[1::] if number >= pivot]
        return (quick_sort(less) + [pivot] + quick_sort(greater))
    
numbers = [2, -2, 10, 0]
print(quick_sort(numbers))