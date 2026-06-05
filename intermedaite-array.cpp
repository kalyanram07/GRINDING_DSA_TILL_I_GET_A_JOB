// problem - 1 finding 2nd largest element in an array
// problem - 2 checking if arrray is sorted or not 
// problem - 3 linear search 
// problem - 4 counting positive , negative and zero elements 
// problem - 5 finding both maximum and minimum element in an array
// problem - 6 left rotate array by one position
// problem - 7 remove duplicates from sorted array 

// problem - 1 
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest; // Return -1 if no 2nd largest exists
}

// problem - 2


bool isSorted(const vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true;
}


// problem - 3 

int linearSearch(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}


// problem - 4


void countElements(const vector<int>& arr) {
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int num : arr) {
        if (num > 0) positiveCount++;
        else if (num < 0) negativeCount++;
        else zeroCount++;
    }

    cout << "Positives: " << positiveCount 
         << ", Negatives: " << negativeCount 
         << ", Zeros: " << zeroCount << endl;
}



// problem - 5

pair<int, int> findMinMax(const vector<int>& arr) {
    if (arr.empty()) return { -1, -1 }; // Handle empty array edge case

    int minVal = arr;
    int maxVal = arr;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return { minVal, maxVal }; // Returns a pair (min, max)
}



// problem - 6

void leftRotateByOne(vector<int>& arr) {
    if (arr.size() <= 1) return;

    int firstElement = arr;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = firstElement;
}


// problem - 7


int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;

    int i = 0; // Pointer for the unique elements
    for (size_t j = 1; j < arr.size(); ++j) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; // Returns the number of unique elements
}


