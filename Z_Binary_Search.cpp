#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++) // O(N);
    {
        cin >> A[i];
    }

    sort(A.begin(),A.end()); // O(NlogN)

    while (Q--) // O(Q *logN)
    {
        int x;
        cin >> x;
        int flag = 0;
        int l = 0;
        int r = N - 1;

        while (l <= r) // binary search O(logN)
        {
            int mid = (l + r) / 2;
            if (A[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (A[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}
// time compleaxity : O(N + QlogN + NlogN)
// Nlogn = 10^5 * log(10^5) = 10^5 * 17 = 1.7 * 10^6