#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Size of array ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int c= 0; 

    for (int i = 0; i < n; i++)
    {
        int f = 0; 

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                f = 1;
                break;
            }
        }

        if (f== 0) 
        {
            c++;
        }
    }

    cout << "Total number of distinct elements: " << c << endl;

    return 0;
}

