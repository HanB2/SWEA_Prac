#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;
    int Num;

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> Num;
        int result =0;
        int tmp =0;

        bool chk[10] = {false};

        while (true)
        {
            tmp = Num % 10;
            chk[tmp] = true;

            if (Num/10 == 0)
            {
                break;
            }
            else
            {
                Num = Num /10;
            }
            
        }

        for (int i = 0; i < 10; i++)
        {
            if (chk[i] == true)
            {
                result++;
            }
            
        }

        cout << "#" << t_case +1 << " " << result << endl;
        
    }
}