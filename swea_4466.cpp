#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int N, K;

        cin >> N >> K;

        vector<int> num;

        for (int i = 0; i < N; i++)
        {
            int number;
            cin >> number;

            num.push_back(number);
        }

        sort(num.begin(), num.end(), greater<int>());
        
        int result =0;
        for (int i = 0; i < K; i++)
        {
            result += num[i];
        }

        cout <<"#" << t_case+1 << " " << result <<'\n';
        


    }
}