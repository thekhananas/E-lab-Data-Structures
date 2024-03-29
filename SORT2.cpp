#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    int minindex, temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
        if (i == 1)
        {
            for (int k = 0; k < n; k++)
                cout << arr[k] << " ";
        }
    }
} //author anas khan
int main()
{
    int n, arr[20];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    SelectionSort(arr, n);
    cout << "\nSorted Array:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}