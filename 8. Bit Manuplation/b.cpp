#include <bits/stdc++.h>
using namespace std;

// check a number is power of 2 or not
bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}

// count number of once in binary repersantation
int numberofonce(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

void subsets(int arr[], int n)
{
    for (int i = 0; i < 1 << n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 19, i = 1;

    //cout<<ispowerof2(n);
    cout << numberofonce(n);

    int arr[] = {1, 2, 3, 4};
    subsets(arr, 4);
    return 0;
}