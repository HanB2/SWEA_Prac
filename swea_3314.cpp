#include <iostream>

using namespace std;

int main(){

    int T;
    int score;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int sum=0;
        int avg=0;

        for (int i = 0; i < 5; i++)
        {
            cin >> score;
            if (score < 40)
            {
                sum += 40;
            }
            else
            {
                sum += score;
            }
            
            avg = sum/5;

           
            
        }
         cout << '#' << t_case +1 << ' '<< avg <<'\n'; 
    }
}



