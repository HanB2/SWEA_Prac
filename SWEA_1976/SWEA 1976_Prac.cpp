#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    int a[2],b[2];
    int c[2];
    int RoundOff =0;

    for (int t_case = 0; t_case < T; t_case++)
    {
        cin >> a[0] >> a[1] >>b[0] >> b[1];
        c[1] = a[1] + b[1];
        if (c[1] >59)
        {
            RoundOff =1;
            c[1] -=60;
            
        }
        c[0] = a[0] +b[0] +RoundOff;
        if (c[0] > 12)
        {
            c[0] -=12;
        }

        cout << "#" << t_case + 1 << " " << c[0] <<" " <<c[1]<< endl;
    }
}



