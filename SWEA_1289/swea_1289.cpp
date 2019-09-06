#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int cnt =0;
        char now = '0';
        string memory;

        cin >> memory;


        for (int i = 0; i < memory.length(); i++)
        {
            if (memory.at(i) != now)
            {
                if (now == '0')
                {
                    now = '1';
                }
                else
                {
                    
                    now = '0';
                }
                cnt++;
            }
            
        }
        
        cout << "#" << t_case +1 << " " << cnt << endl;

    }
}
