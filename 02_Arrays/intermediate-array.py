## problem - 1 finding 2nd largest element in an array
## problem - 2 checking if arrray is sorted or not 
## problem - 3 linear search 
## problem - 4 counting positive , negative and zero elements 
## problem - 5 finding both maximum and minimum element in an array
## problem - 6 left rotate array by one position
## problem - 7 remove duplicates from sorted array 


# problem - 1 finding 2nd largest element in an array


def find_second_largest(arr):
    largest = float('-inf')
    second_largest = float('-inf')
    
    for num in arr:
        if num > largest:
            second_largest = largest
            largest = num
        elif num > second_largest and num != largest:
            second_largest = num
            
    return second_largest if second_largest != float('-inf') else -1

# problem - 2 checking if arrray is sorted or not

def is_sorted(arr):
    # Returns True if all adjacent pairs satisfy the condition
    return all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1))


# problem - 3 linear search

def linear_search(arr, target):
    for index, num in enumerate(arr):
        if num == target:
            return index
    return -1

# problem - 4 counting positive , negative and zero elements

def count_elements(arr):
    positives = 0
    negatives = 0
    zeros = 0
    
    for num in arr:
        if num > 0:
            positives += 1
        elif num < 0:
            negatives += 1
        else:
            zeros += 1
            
    print(f"Positives: {positives}, Negatives: {negatives}, Zeros: {zeros}")

# problem - 5 finding both maximum and minimum element in an array

def find_min_max(arr):
    if not arr:
        return None, None
        
    min_val = arr
    max_val = arr
    
    for num in arr[1:]:
        if num < min_val:
            min_val = num
        if num > max_val:
            max_val = num
            
    return min_val, max_val

# problem - 6 left rotate array by one position

def left_rotate_by_one(arr):
    if len(arr) <= 1:
        return arr
    
    # arr[1:] gets everything from index 1 to the end
    # arr[:1] gets a list containing just the first element
    return arr[1:] + arr[:1]

# problem - 7 remove duplicates from sorted array

def remove_duplicates(arr):
    if not arr:
        return 0
        
    i = 0  # Pointer for unique elements
    for j in range(1, len(arr)):
        if arr[j] != arr[i]:
            i += 1
            arr[i] = arr[j]
            
    return i + 1  # Returns length of unique elements