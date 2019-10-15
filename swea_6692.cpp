#include <iostream>

using namespace std;

int main(){
        
    int T;

    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int N;
        cin >> N;

        double p;
        double sum =0;
        int x;

        for (int i = 0; i < N; i++)
        {
            cin >> p >> x;
        
            sum += p*x;

        }
        cout<< fixed;
        cout.precision(6);  //여기가 포인트.
        cout << "#" << t_case+1 <<" "<< sum <<'\n';

    }
}