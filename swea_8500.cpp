#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;


    for (int t_case = 0; t_case < T; t_case++)
    {

        int N;
        int sum =0;
        int max =0;
        int interval =0;

        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> interval;
            sum += interval;

            if (max < interval)
            {
                max = interval;
            }
        }

        cout << "#" << t_case+1 << " "<< sum + N + max <<'\n';
    }
}