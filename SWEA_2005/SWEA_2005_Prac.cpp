#include <iostream>

using namespace std;



int main(){
    int T;
    cin >> T;
    int N;
    int a[2][10];

    for (int t_case = 0; t_case < T; t_case++)
    {

        cin >> N;
        cout << "#" << t_case +1 << endl ;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j==0 || j ==i)
                {
                    a[i%2][j] = 1;
                }
                else
                {
                    a[i%2][j] = a[(i+1)%2][j-1] + a[(i+1)%2][j];
                }
                
            }

            for (int j = 0; j <= i; j++)
            {
               cout << a[i%2][j] << " ";
            }
            cout << endl;
        }
    }
}