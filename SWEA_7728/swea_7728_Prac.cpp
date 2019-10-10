#include <iostream>

using namespace std;

int main(){
    int T, input;

    cin >> T;


    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> input;
        int result =0;
        int temp =0;

        bool check[10] = {false};

        while (true)
        {
            temp = input %10;
            check[temp] = true;


            if (input/10 == 0)
            {
                break;
            }
            else
            {
                input = input /10;
            }
            
            
        }
        for (int i = 0; i < 10; i++)
        {
            if (check[i] == true)
            {
                result++;
            }
            
        }
        
        cout << "#" << t_case+1 << " "<< result << endl;
        

    }
}

