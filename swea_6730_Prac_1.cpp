//Created by Cyhan Mo 모성환 19.09.06
#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int N;
        cin >> N;
        int Arr[101];

        for (int  i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }

        int MaxUp =0;
        int MaxDown =0;

        for (int i = 0; i < N-1; i++)
        {
            int level = Arr[i+1] -Arr[i];

            if (level > 0)
            {
                if (level > MaxUp)
                {
                    MaxUp = level;
                }
                
                continue;
            }
            if (level < 0)
            {
                if (level < -MaxDown)
                {
                    MaxDown = - level;
                }
                
            }
            
        }

        cout <<"#" << t_case+1 << " "<<MaxUp << " "<<MaxDown << endl;
        
    }
}

