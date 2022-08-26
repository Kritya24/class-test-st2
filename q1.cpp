// Name - Kritya Deo Singh
// Roll no. - 2010991923
// Set - 4
// q1 - minimum index

#include <iostream>
#include <unordered_set>
using namespace std;
 
//initializing function
int findMinIndex(int arr[], int n)
{
    int minIndex = n;
    // empty array 
    unordered_set<int> set;
    // right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // updating minimum index
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        // insert element in the set 
        else {
            set.insert(arr[i]);
        }
    }
    // invalid 
    if (minIndex == n) {
        return -1;
    }
    //  minimum index
    return minIndex;
}
 
int main()
{
    
    int arr[] = { 5, 6, 3, 4, 3, 6, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
    return 0;
}