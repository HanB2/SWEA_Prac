#include <iostream>


using namespace std;

int N;
int a[1000000];
int mx;
long long sum;

int main(){
    int T;
    cin >> T;

    

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        sum =0;
        mx = a[N-1];

        for (int i = N-2; i >= 0; i--)
        {
            if (a[i] > mx)
            {
                mx = a[i];
            }
            else
            {
                sum += mx -a[i];
            }

        }

        cout << "#" << t_case+1 << " " << sum << endl;
        
    }
}
