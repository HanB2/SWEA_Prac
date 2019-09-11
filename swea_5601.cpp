#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int N;
        cin >> N;

        cout << "#" << t_case+1;

        for (int i = 0; i < N; i++)
        {
            cout << " " << 1 << "/" << N ; 
        }
        cout << endl;
    

    }
}



