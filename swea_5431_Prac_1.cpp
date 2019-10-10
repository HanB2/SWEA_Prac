#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int W_Students;
        int SubmitStudents;
        int decisionArr[100] = {0,};

        cin >> W_Students >> SubmitStudents;
        for (int i = 0; i < SubmitStudents; i++) 
        {
            int num;
            cin >> num;
            decisionArr[num] =1;

        }

        cout << "#" <<t_case+1;

        for (int i = 1; i <= W_Students; i++)
        {
            if (decisionArr[i] == 0)
            {
                cout << " " << i;
            }
        }
        cout << '\n';
        

    }
}