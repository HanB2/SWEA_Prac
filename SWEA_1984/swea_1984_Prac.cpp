#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int T;

    cin >> T;
    int a[10];

    for (int t_case = 0; t_case < T; t_case++)
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }

        int min = 10000;
        int max =0;
        int sum =0;

        for (int i = 0; i < 10; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            
            if (a[i] < min)
            {
                min = a[i];
            }

            sum += a[i];
        }

        int Result = round((sum - min - max)/8.0f);

        cout << "#" << t_case + 1 << " " << Result << endl;
        
    }

}
