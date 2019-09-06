#include <iostream>

using namespace std;

int main(){
    
    string grade[10] = {"A+", "A0", "A-","B+", "B0", "B-","C+", "C0", "C-","D0"};

    int T;
    cin >> T;
    int N, K;
    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> N >> K;
        float exam;
        float score[N];

        for (int i = 0; i < N; i++)
        {
            scorep[i] =0;
            
            cin >> exam;
            score[i] += exam *0.35;
            
            cin >> exam;
            score[i] += exam *0.45;

            cin >> exam;
            score[i] += exam *0.20;
        }

        int cnt =0;
        
        for (int i = 0; i < N; i++)
        {
            if (score[i] > score[K-1] & (i ! = K-1))
            {
               cnt++
            }

        }

        cout << "#" << t_case +1 << " " << grade[(cnt)/(N/10)] << endl; 
    }
}