#include <iostream>
#include <functional>   // <functional> header is required for function objects (functors)
#include <algorithm>    // <algorithm> header is required for sort() function

using namespace std;

int main()
{
    int arr[] = {1, 73, 4, 2, 54, 7};

    // Sort first 5 elements in ascending order
    sort(arr, arr + 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;

    // Sort all elements in descending order using greater<int>() functor
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}