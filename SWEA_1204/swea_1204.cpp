#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int score[101] ={0};
        int temp;
        int max =0;
        int max_students =0;

        cin >> temp;

        for (int i = 0; i < 1000; i++)
        {
            cin >> temp;
            score[temp]++;
        }

        for (int i = 0; i < 101; i++)
        {
            if (score[i] >= max_students)
            {
                max =i;
                max_students = score[i];
            }
            
        }
        
        cout << "#" << t_case +1 << " " << max << endl; 
         

    }
}