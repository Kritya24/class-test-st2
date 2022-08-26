// Name - Kritya Deo Singh
// Roll no. - 2010991923
// Set - 4
// q2 - consecutive integers

#include <iostream>
#include <unordered_set>
using namespace std;
 
// initializing function
bool isConsecutive(int arr[], int n)
{
    if (n <= 1) {
        return true;
    }
 
    int min = arr[0], max = arr[0];
    // minimum / maximum element in array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    if (max - min != n - 1) {
        return false;
    }
    // empty
    unordered_set<int> visited;
    // checking if element is appearing one time
    for (int i = 0; i < n; i++)
    {
        if (visited.find(arr[i]) != visited.end()) {
            return false;
        }
        visited.insert(arr[i]);
    }
    // all array elements are different
    return true;
}
 
int main()
{
    int arr[] = { -1, 5, 4, 2, 0, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    isConsecutive(arr, n)? cout << "The array contains consecutive integers":
                        cout << "The array does not contain consecutive integers";
    return 0;
}