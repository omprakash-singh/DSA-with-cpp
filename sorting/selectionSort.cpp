#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;

     int arr[n];

     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }

     for (int i = 0; i < n - 1; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (arr[i] >= arr[j])
               {
                    swap(arr[i], arr[j]);
               }
          }
     }

     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }
}

// Space complexity O(1)
// Time complexity O(n^2)
// Best Case O(n^2)
// worst case O(n^2)