#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int T;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int N;
        cin >> N;

        int p = pow(2,N)-1;
        int *arr = new int[p];
        for (int i = 0; i < p; i++)
        {
            cin >> arr[i];
        }
        int divide = p/2;

        cout <<"#" <<t_case+1 <<" ";

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < (int)pow(2,i));j++)
            {
                cout <<arr[divide + (int)pow(2,(N-i))*j]<<" ";
            }
            cout << '\n';
            divide -= pow(2,(N-2-i));
            
        }
        delete[] arr;
        arr = NULL;
        

    }
}