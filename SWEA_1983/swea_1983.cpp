#include <iostream>

using namespace std;

int main(){
    
    string grade[10] = {"A+","A0","A-","B+","B0","B-","C+","C0","C-","D0"};

    int T;
    cin >> T;
    int N;
    int K;

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> N >> K;
        float score[N];
        float exam;

        for (int i = 0; i < N; i++)
        {
            score[i] =0;
            cin >> exam;
            score[i] += exam * 0.35;

            cin >> exam;
            score[i] += exam * 0.45;

            cin >> exam;
            score[i] += exam * 0.20;
        }

        int cnt =0;

        for (int i = 0; i < N; i++)
        {
            if (score[i] > score[K-1] & (i != K-1))
            {
                cnt++;
            }
        }

        cout << "#" << t_case +1 << " " << grade[(cnt)/(N/10)] << endl;
    }
}
















/*
1

10 2

87 59 88
99 94 78
94 86 86
99 100 99
69 76 70
76 89 96
98 95 96
74 69 60
98 84 67
85 84 91

*/
