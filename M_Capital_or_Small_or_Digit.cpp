#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int target;
    cin >> target;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    int sum = a[i] + a[j] + a[k] + a[l];
                    if(sum ==target){
                        flag=1;
                    }
                }
            }
        }
    }

    if (flag == 1)
    {
        cout << "target matched";
    }
    else
    {
        cout << "target not matched";
    }
    return 0;
}