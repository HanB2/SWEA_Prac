#include <iostream>

using namespace std;

int main(){

    int T;

    cin >> T;

    for (int t_case = 0; t_case < T; t_case++)
    {
        int m,d;

        cin >> m >> d;

        int cnt = 3;
        switch(m)
        {
            case 12: cnt += 30;
            case 11: cnt += 31;
            case 10: cnt += 30;
            case 9: cnt += 31;
            case 8: cnt += 31;
            case 7: cnt += 30;
            case 6: cnt += 31;
            case 5: cnt += 30;
            case 4: cnt += 31;
            case 3: cnt += 29;
            case 2: cnt += 31;
            case 1: cnt += d;
        }
       
        cout << "#" << t_case+1 <<" " << (cnt%7)<<'\n';

    }
}