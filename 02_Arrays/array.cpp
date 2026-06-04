// finding max element in an array
// input - 5 , 2 , 8 , 1 , 9

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 8, 1, 9};
    int n = 5;

    int maximum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    cout << "Maximum Element = " << maximum;

    return 0;
}

// here the output is 9, which is the maximum element in the array.

// ANALYSIS:
// Time Complexity: O(n) - We need to traverse the entire array once to find the maximum element.
// Space Complexity: O(1) - We are using only a constant amount of extra space

// WHAT IF THE ARRAY GIVEN IS [-5, -2, -8, -1] WILL THIS WORK 

int main()
{
    int arr[] = {-5, -2, -8, -1};
    int n = 5;

    int maximum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    cout << "Maximum Element = " << maximum;

    return 0;
}

// Yes, this will work. The algorithm does not depend on the values being positive or negative. It will correctly identify the maximum element in the array, which in this case is -1.
// PRACTICE PROBLEMS:2 FINDING MIN ELEMENT IN AN ARRAY
// INPUT - 5 , 2 , 8 , 1 , 9

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 8, 1, 9};
    int n = 5;

    int minimum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    cout << "Minimum Element = " << minimum;

    return 0;
}

// now the output is 1, which is the minimum element in the array.

// now we are moving to the next topic which is sum of all elements in an array 
// input - 10 , 20 , 30 , 40 , 50

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of all elements in the array = " << sum;

    return 0;
}

// here the output is 150, which is the sum of all elements in the array.
// time complexity is O(n) and space complexity is O(1) as we are using only a constant amount of extra space.
// for finding the average of all elements in an array we can simply divide the sum by the number of elements in the array.


// moving to the next concept which is counting even numbers in an array
// input - 1, 2, 3, 4, 5, 6

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int countEven = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            countEven++;
        }
    }

    cout << "Count of even numbers in the array = " << countEven;

    return 0;
}

// here the output is 3, which is the count of even numbers in the array (2, 4, 6).
// time complexity is O(n) and space complexity is O(1) as we are using
// for odd numbers the condition will be arr[i] % 2 != 0 and we can count the odd numbers in the same way as we counted the even numbers.
// the sample code is given below 


if(arr[i] % 2 != 0)
{
    countOdd++;
}

// the next concept is reverse of an array
// input - 1, 2, 3, 4, 5

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    for(int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// the 2 pointer approach can also be used to reverse the array in place without using extra space. The sample code is given below
// the code is mentioned below
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }

    cout << "Reversed Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// here we use the 2 pointer techniques because this is so much imp we use this for many patterns in latwer like Reverse String Palindrome Check, Two Sum (Sorted Array), Container With Most Water, Remove Duplicates, Move Zeroes
