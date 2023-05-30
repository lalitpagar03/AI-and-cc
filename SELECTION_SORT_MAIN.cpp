#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>& arr) 
{
    int n = arr.size();
    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n - 1; i++) 
    {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx]) 
            {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) 
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

