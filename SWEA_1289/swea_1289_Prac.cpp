#include <iostream>

using namespace std;

int main(){
    int T;

    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        string InitMemoryAddr;
        char Cur ='0';
        cin >> InitMemoryAddr;
        int cnt =0;

        for (int i = 0; i < InitMemoryAddr.length(); i++)
        {
            if (InitMemoryAddr.at(i) != Cur)
            {
                if (Cur == '0')
                {
                    Cur = '1';
                }
                else
                {
                    Cur ='0';
                }
                
                cnt++;
                
            }
            

        }
        
        cout << "#" << t_case +1 << " " << cnt << endl;

    }
}