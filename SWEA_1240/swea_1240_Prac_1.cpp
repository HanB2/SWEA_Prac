#include <iostream>
using namespace std;

int main()
{
    int T = 10;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n, m;
        cin >> n >> m;
        char arr[101] = { 0, };
        int check = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr;
            int ptr = 0;
            if (check == 2)
                continue;
            for (int k = m - 1; k >= 0; k--)
            {
                if (arr[k] == '1')
                {
                    check = 1;
                    ptr = k;
                    break;
                }
            }
            if (check == 1)
            {
                int t[8] = { 0, };
                for (int k = ptr,l=7; l >= 0;k = k-7,l--)
                {
                    if (arr[k - 1] == '0' && arr[k - 2] == '1' && arr[k - 3] == '1' && arr[k - 4] == '0' && arr[k - 5] == '0') {
                        t[l] = 0;
                    }
                    else if (arr[k - 1] == '0' && arr[k - 2] == '0' && arr[k - 3] == '1' && arr[k - 4] == '1' && arr[k - 5] == '0') {
                        t[l] = 1;
                    }
                    else if (arr[k - 1] == '1' && arr[k - 2] == '0' && arr[k - 3] == '0' && arr[k - 4] == '1' && arr[k - 5] == '0') {
                        t[l] = 2;
                    }
                    else if (arr[k - 1] == '0' && arr[k - 2] == '1' && arr[k - 3] == '1' && arr[k - 4] == '1' && arr[k - 5] == '1') {
                        t[l] = 3;
                    }
                    else if (arr[k - 1] == '1' && arr[k - 2] == '0' && arr[k - 3] == '0' && arr[k - 4] == '0' && arr[k - 5] == '1') {
                        t[l] = 4;
                    }
                    else if (arr[k - 1] == '0' && arr[k - 2] == '0' && arr[k - 3] == '0' && arr[k - 4] == '1' && arr[k - 5] == '1') {
                        t[l] = 5;
                    }
                    else if (arr[k - 1] == '1' && arr[k - 2] == '1' && arr[k - 3] == '1' && arr[k - 4] == '0' && arr[k - 5] == '1') {
                        t[l] = 6;
                    }
                    else if (arr[k - 1] == '1' && arr[k - 2] == '0' && arr[k - 3] == '1' && arr[k - 4] == '1' && arr[k - 5] == '1') {
                        t[l] = 7;
                    }
                    else if (arr[k - 1] == '1' && arr[k - 2] == '1' && arr[k - 3] == '0' && arr[k - 4] == '1' && arr[k - 5] == '1') {
                        t[l] = 8;
                    }
                    else if (arr[k - 1] == '1' && arr[k - 2] == '0' && arr[k - 3] == '1' && arr[k - 4] == '0' && arr[k - 5] == '0') {
                        t[l] = 9;
                    }
                }
                int ans = (t[0] + t[2] + t[4] + t[6]) * 3 + (t[1] + t[3] + t[5]) + t[7];
                int sum = 0;
                if (ans % 10 == 0)
                {
                    for (int k = 0; k < 8; k++)
                    {
                        sum += t[k];
                    }
                }
                cout << "#" << i << ' ' << sum << endl;
                check = 2;
            }
        }
    }
    return 0;
} 