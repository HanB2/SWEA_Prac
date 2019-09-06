#include <iostream>

using namespace std;


int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int score[101] = {0};

        int max =0;
        int min =10000;
        int temp;
        int repeat_max =0;

        cin >> temp;

        for (int i = 0; i < 1000; i++)
        {
            cin >> temp;
            score[temp]++;
        }

        for (int i = 0; i < 101; i++)
        {
            if (score[i] >= repeat_max)
            {
                max = i;
                repeat_max = score[i];

            }
            
            
        }
        cout << "#" << t_case +1 << " " << max << endl;
        
    }
}