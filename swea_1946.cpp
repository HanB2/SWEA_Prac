#include <iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> N;
        char c[N];
        int k[N];

        for (int i = 0; i < N; i++)
        {
            cin >> c[i];
            cin >> k[i];
        }

        cout << "#" << t_case +1 << endl;
        int cutLine =0;
        for (int i = 0; i < N; i++)
        {
            while (k[i] !=0)
            {
                cout << c[i];
                k[i]--;
                if (cutLine ++ == 9)
                {
                    cout << endl;
                    cutLine =0;
                }
                
            }
            
        }
        
        cout << endl;
        
    }
}