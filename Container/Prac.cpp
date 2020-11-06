#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int current_mex = 0;
        sort(arr, arr + n);
        int j, i;
        j = 1;

        for (i = 0; i < n; i++) //Finding first mex
        {
            if (arr[i] > j)
            {
                current_mex = j;
                break;
            }
            else
            {
                j++;
            }
        }

        if (i == n and current_mex = 0)
            current_mex = arr[n - 1] + 1;

        if (current_mex < m)
            cout << "-1" << endl;
        else if (current_mex == m)
            cout << n << endl;

        else
        {
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != m)
                    res++;
            }
            cout << res << endl;
        }
    }

    return 0;
}