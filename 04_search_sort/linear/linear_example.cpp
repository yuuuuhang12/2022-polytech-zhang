#include "linear_c.h"

int main() 
{
    int x;
    int arr[] = {1, 2, 3, 3, 3};
    cout << "Element:" << endl;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[] = { 1, 2, 3, 3, 3 };

    int num = count(arr, n, x, result);
    if (num == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "There are " << num << " elements" << endl;
        cout << "Their idexes are " << endl;
        for (int s = 0; s < num; s++)
            cout << result[s] << endl;
    }
    system("pause");
    return 0;
}