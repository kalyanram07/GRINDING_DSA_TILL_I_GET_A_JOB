## Problem 1: Find Maximum Element

arr = [5, 2, 8, 1, 9]

maximum = arr[0]

for i in range(1, len(arr)):
    if arr[i] > maximum:
        maximum = arr[i]

print("Maximum Element =", maximum)


## Problem 2: Find Minimum Element

arr = [5, 2, 8, 1, 9]

minimum = arr[0]

for i in range(1, len(arr)):
    if arr[i] < minimum:
        minimum = arr[i]

print("Minimum Element =", minimum)


## Problem 3: Calculate the Sum of Elements

arr = [10, 20, 30, 40, 50]

total = 0

for num in arr:
    total += num

print("Sum =", total)


## Problem 4: Count Even Numbers
arr = [1, 2, 3, 4, 5, 6]

count_even = 0

for num in arr:
    if num % 2 == 0:
        count_even += 1

print("Count of even numbers =", count_even)

## Problem 5: Reverse an Array

arr = [1, 2, 3, 4, 5]

print("Original Array:", arr)

print("Reversed Array:", end=" ")

for i in range(len(arr) - 1, -1, -1):
    print(arr[i], end=" ")


## 2 pointer method to reverse an array
arr = [1, 2, 3, 4, 5]

left = 0
right = len(arr) - 1

while left < right:
    arr[left], arr[right] = arr[right], arr[left]

    left += 1
    right -= 1

print("Reversed Array:", arr)

