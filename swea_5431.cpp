#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int Num_Students;
        int Num_Submit;
        
        int Students[100] ={0,};

        cin >> Num_Students >> Num_Submit;

        for (int i = 0; i < Num_Submit; i++)
        {
            int num;
            cin >> num;
            Students[num] =1;
        }

        cout <<"#"<< t_case+1;

        for (int i = 1; i <= Num_Students; i++)
        {
            if (Students[i] ==0)
            {
                cout << " " <<i;
            }
            
        }

        cout << '\n';
        
    }
}